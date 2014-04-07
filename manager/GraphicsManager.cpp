/*
 * GraphicsManager.h
 */

// Engine Includes
#include "../utility.h"
#include "GraphicsManager.h"
#include "LogManager.h"

// System Includes
//Include OpenGL header files, so that we can use OpenGL
#ifdef __APPLE__
#include <OpenGL/OpenGL.h>
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <iostream>
#include <stdlib.h>
using namespace std;

GraphicsManager::GraphicsManager()
{
	startUp();
}

GraphicsManager::~GraphicsManager()
{

}

GraphicsManager &GraphicsManager::getInstance()
{
	static GraphicsManager GraphicsManager;
	return GraphicsManager;
}

int GraphicsManager::startUp(bool fullscreen)
{
	is_started = true;

	//Initialize GLUT
	char fakeParam[] = "fake";
	char *fakeargv[] =
	{ fakeParam, NULL };
	int fakeargc = 1;

	glutInit(&fakeargc, fakeargv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(400, 400); //Set the window size

	//Create the window
	glutCreateWindow("K9");

	if (fullscreen)
	{
		glutFullScreen();
	}

	initRendering(); //Initialize rendering

	//Set handler functions for drawing, keypresses, and window resizes
	glutDisplayFunc(drawScene);
	glutKeyboardFunc(handleKeypress);
	glutReshapeFunc(handleResize);

	glutMainLoop(); //Start the main loop.  glutMainLoop doesn't return.

	// Makes 3D drawing work when something is in front of something else
	glEnable(GL_DEPTH_TEST);

	return 0;
}

void GraphicsManager::shutDown()
{
	LogManager &log_manager = LogManager::getInstance();
	log_manager.writeLog(
			"GraphicsManager::shutDown() > Shutting down GraphicsManager.");

	is_started = false;
}

// -------------
void GraphicsManager::initRendering()
{
	//Makes 3D drawing work when something is in front of something else
	glEnable(GL_DEPTH_TEST);
}

//Called when a key is pressed
void GraphicsManager::handleKeypress(unsigned char key, int x, int y)
{    //The current mouse coordinates
	switch (key)
	{
	case 27: //Escape key
		exit(0); //Exit the program
	}
}

// Called when the window is resized
void GraphicsManager::handleResize(int w, int h)
{
	// Tell OpenGL how to convert from coordinates to pixel values
	glViewport(0, 0, w, h);

	glMatrixMode(GL_PROJECTION); // Switch to setting the camera perspective

	// Set the camera perspective
	glLoadIdentity(); // Reset the camera
	gluPerspective(45.0,                  // The camera angle
			(double) w / (double) h, // The width-to-height ratio
			1.0,                   // The near z clipping coordinate
			200.0);                // The far z clipping coordinate
}

//Draws the 3D scene
void GraphicsManager::drawScene()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	// reset OpenGL transformation matrix
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity(); // reset transformation matrix to identity

	// setup look at transformation so that
	// eye is at : (0,0,3)
	// look at center is at : (0,0,0)
	// up direction is +y axis
	gluLookAt(0.f, 0.f, 3.f, 0.f, 0.f, 0.f, 0.f, 1.f, 0.f);
	float fRotateAngle = 0.f;
	glRotatef(fRotateAngle, 0.f, 1.f, 0.f);

	// Test drawing a solid teapot
	glColor3f(1.0, 0.0, 0.0); // set current color to Red
	glutSolidTeapot(1.f); // call glut utility to draw a solid teapot

	//glFlush();
	glutSwapBuffers();
}
