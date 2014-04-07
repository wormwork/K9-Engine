/*
* Position3D.h
*/


#ifndef _POSITION3D_H_
#define _POSITION3D_H_

class Position3D {

  private:
    int x; // x coordinate
    int y; // y coordinate
    int z; // z coordinate

  public:
    /*
    * Constructors
    */
    Position3D(int init_x, int init_y, int init_z);
    Position3D();

    /*
    * Getters
    */
    int getX();
    int getY();
    int getZ();

    /*
    * Setters
    */
    void setX(int new_x);
    void setY(int new_y);
    void setZ(int new_z);
    void setXY(int new_x, int new_y);
    void setXYZ(int new_x, int new_y, int new_z);
};

#endif
