/*
 * Position2D.cpp
 */

// Engine Includes
#include "Position2D.h"

// Create Position2D at (init_x, init_y)
Position2D::Position2D(int init_x, int init_y)
{
	x = init_x;
	y = init_y;
}

// Create Position2D at default coordinates (0, 0)
Position2D::Position2D()
{
	x = 0;
	y = 0;
}

// Return x value
int Position2D::getX()
{
	return x;
}

// Set x value
void Position2D::setX(int new_x)
{
	x = new_x;
}

// Return y value
int Position2D::getY()
{
	return y;
}

// Set y value
void Position2D::setY(int new_y)
{
	y = new_y;
}

// Set both X and Y value
void Position2D::setXY(int new_x, int new_y)
{
	x = new_x;
	y = new_y;
}
