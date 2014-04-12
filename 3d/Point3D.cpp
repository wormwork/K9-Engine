/*
 * Vector3.cpp
 */

// Engine Includes
#include "Vector3.h"

// System Includes
#include <math.h>

Vector3::Vector3(int init_x, int init_y, int init_z)
{
	x = init_x;
	y = init_y;
	z = init_z;
}

Vector3::Vector3()
{
	x = 0;
	y = 0;
	z = 0;
}

void Vector3::initToZero()
{
	x = 0;
	y = 0;
	z = 0;
}

void Vector3::normalize()
{
    if( x == 0 && y == 0 && z == 0 )
    {
      return;
    }

    float norm = 1.0F / sqrt( (x * x) + (y * y) + (z * z) );

    x *= norm;
    y *= norm;
    z *= norm;
}



/*
 * Getters
 */


/*
 * Setters
 */

/*
 * Operators
 */

/*
 * Operator Overrides
 */
void Vector3::operator *= (double d)
{
    x *= d;
    y *= d;
    z *= d;
}

void Vector3::operator += (Vector3 &v)
{
    x += v.x;
    y += v.y;
    z += v.z;
}
