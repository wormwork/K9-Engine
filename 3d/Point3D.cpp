/*
 * Point3D.cpp
 */

// Engine Includes
#include "Point3D.h"

// System Includes
#include <math.h>

// Create Point3D at (init_x, init_y, init_z)
Point3D::Point3D(float init_x, float init_y, float init_z)
{
	x = init_x;
	y = init_y;
	z = init_z;
}

// Create Point3D at default coordinates (0, 0, 0)
Point3D::Point3D()
{
	x = 0;
	y = 0;
	z = 0;
}

/*
 * Methods
 */
float Point3D::distanceToPoint3D(Point3D p)
{
	float distance = sqrt(
			((x - p.x) * (x - p.x))
					+ ((y - p.y) * (y - p.y))
					+ ((z - p.z) * (z - p.z)));
	return (distance);
}

Point2D Point3D::toPoint2D()
{
	return Point2D(x, y);
}

/*
 * Getters
 */
float Point3D::getX()
{
	return x;
}

float Point3D::getY()
{
	return y;
}

float Point3D::getZ()
{
	return z;
}

/*
 * Setters
 */
// Set x value
void Point3D::setX(float new_x)
{
	x = new_x;
}

// Set y value
void Point3D::setY(float new_y)
{
	y = new_y;
}

// Set z value
void Point3D::setZ(float new_z)
{
	y = new_z;
}

// Set both X and Y values
void Point3D::setXY(float new_x, float new_y)
{
	x = new_x;
	y = new_y;
}

// Set all X, Y, and Z values
void Point3D::setXYZ(float new_x, float new_y, float new_z)
{
	x = new_x;
	y = new_y;
	z = new_z;
}

/*
 * Operator Overrides
 */
void Point3D::operator *=(double d)
{
	x *= d;
	y *= d;
	z *= d;
}

void Point3D::operator +=(Point3D p)
{
	x += p.x;
	y += p.y;
	z += p.z;
}

bool Point3D::operator == (Point3D p)
{
	return ((x == p.x) && (y == p.y) && (z == p.z));
}

Point3D Point3D::operator + (Point3D p)
{
	return ( Point3D((x + p.x), (y + p.y), (z + p.z)) );
}
