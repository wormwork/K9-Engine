/*
 * Position3D.cpp
 */

// Engine Includes
#include "Position3D.h"

// Create Position3D at (init_x, init_y, init_z)
Position3D::Position3D(int init_x, int init_y, int init_z)
{
	x = init_x;
	y = init_y;
	z = init_z;
}

// Create Position3D at default coordinates (0, 0, 0)
Position3D::Position3D()
{
	x = 0;
	y = 0;
	z = 0;
}

/*
 * Getters
 */
// Return x value
int Position3D::getX()
{
	return x;
}

// Return y value
int Position3D::getY()
{
	return y;
}

// Return z value
int Position3D::getZ()
{
	return z;
}

/*
 * Setters
 */
// Set x value
void Position3D::setX(int new_x)
{
	x = new_x;
}

// Set y value
void Position3D::setY(int new_y)
{
	y = new_y;
}

// Set z value
void Position3D::setZ(int new_z)
{
	y = new_z;
}

// Set both X and Y values
void Position3D::setXY(int new_x, int new_y)
{
	x = new_x;
	y = new_y;
}

// Set all X, Y, and Z values
void Position3D::setXYZ(int new_x, int new_y, int new_z)
{
	x = new_x;
	y = new_y;
	z = new_z;
}
