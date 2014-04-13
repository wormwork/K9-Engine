/*
 * Point3D.h
 */

#ifndef _POSITION3D_H_
#define _POSITION3D_H_

#include "../2d/Point2D.h"

class Point3D
{

private:
	float x; // x coordinate
	float y; // y coordinate
	float z; // z coordinate

public:
	/*
	 * Constructors
	 */
	Point3D(float init_x, float init_y, float init_z);
	Point3D();

	/*
	 * Methods
	 */
	float distanceToPoint3D(Point3D p);
	Point2D toPoint2D();

	/*
	 * Getters
	 */
	float getX();
	float getY();
	float getZ();

	/*
	 * Setters
	 */
	void setX(float new_x);
	void setY(float new_y);
	void setZ(float new_z);
	void setXY(float new_x, float new_y);
	void setXYZ(float new_x, float new_y, float new_z);

	void operator *= (double d);
	void operator += (Point3D p);
	bool operator == (Point3D p);
	Point3D operator + (Point3D p);
};

#endif
