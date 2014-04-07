/*
* Position2D.h
*/


#ifndef _POSITION2D_H_
#define _POSITION2D_H_

class Position2D {

  private:
    int x; // x coordinate
    int y; // y coordinate

  public:
    // Create Position2D at (init_x, init_y)
    Position2D(int init_x, int init_y);

    // Create Position2D at default coordinates (0, 0)
    Position2D();

    // Get and set x coordinate
    int getX();
    void setX(int new_x);

    // Get and set y coordinate
    int getY();
    void setY(int new_y);

    // Set x and y coordinates
    void setXY(int new_x, int new_y);
};

#endif
