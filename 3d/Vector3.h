/*
 * Vector3.h
 */

#ifndef __VECTOR3_H__
#define __VECTOR3_H__

class Vector3
{

private:
	float x;
	float y;
	float z;


public:
	/*
	 * Constructors
	 */
	Vector3(int init_x, int init_y, int init_z);
	Vector3();

	/*
	 * Operator Overrides
	 */
	void operator *= (double d);
	void operator += (Vector3& v);

	void initToZero();
	void normalize();

	/*
	 * Getters
	 */


	/*
	 * Setters
	 */



};

#endif
