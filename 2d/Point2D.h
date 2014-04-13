/*
 * Point2D.h
 */

#ifndef _POINT2D_H_
#define _POINT2D_H_

class Point2D
{

private:
	float x; // x coordinate
	float y; // y coordinate

public:
	// Create Point2D at (init_x, init_y)
	Point2D(float init_x, float init_y);

	// Create Point2D at default coordinates (0, 0)
	Point2D();

	float distanceToPoint2D(Point2D p);

	// Get and set x coordinate
	float getX();
	void setX(float new_x);

	// Get and set y coordinate
	float getY();
	void setY(float new_y);

	// Set x and y coordinates
	void setXY(float new_x, float new_y);
};

#endif
