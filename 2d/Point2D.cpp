/*
 * Point2D.cpp
 */

// Engine Includes
#include "Point2D.h"

// System Includes
#include <math.h>

// Create Point2D at (init_x, init_y)
Point2D::Point2D(float init_x, float init_y)
{
	x = init_x;
	y = init_y;
}

// Create Point2D at default coordinates (0, 0)
Point2D::Point2D()
{
	x = 0;
	y = 0;
}


float Point2D::distanceToPoint2D(Point2D p)
{
	float distance = sqrt(
			((x - p.x) * (x - p.x))
					+ ((y - p.y) * (y - p.y)));
	return (distance);
}


// Return x value
float Point2D::getX()
{
	return x;
}

// Set x value
void Point2D::setX(float new_x)
{
	x = new_x;
}

// Return y value
float Point2D::getY()
{
	return y;
}

// Set y value
void Point2D::setY(float new_y)
{
	y = new_y;
}

// Set both X and Y value
void Point2D::setXY(float new_x, float new_y)
{
	x = new_x;
	y = new_y;
}
