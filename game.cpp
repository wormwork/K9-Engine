/*
 * game.cpp
 */

#include "manager/LogManager.h"
#include "manager/GraphicsManager.h"
#include "3d/Point3D.h"
#include "2d/Point2D.h"
#include "3d/Vector3.h"

int main(int argc, char** argv)
{
	LogManager& log_manager = LogManager::getInstance();

	log_manager.writeLog("Test Log...");

	Point3D p1 = Point3D(0, 2, 0);
	Point3D p2 = Point3D(1, 1, 1);

	Point2D p3 = p1.toPoint2D();
	Point2D p4 = Point2D(10, 0);

	Point3D p5 = Point3D(1, 1, 1);
	Point3D p6 = Point3D(1, 1, 1);

	if (p5 == p6)
	{
		log_manager.writeLog("p5 == p6:  X: %f, Y: %f, Z: %f / X2: %f, Y2: %f, Z2: %f", p5.getX(), p5.getY(), p5.getZ(), p6.getX(), p6.getY(), p6.getZ());
		Point3D tmp;
		tmp = p5 + p6;
		log_manager.writeLog("X: %f, Y: %f, Z: %f", tmp.getX(), tmp.getY(), tmp.getZ());
	}
	if (p1 == p6)
	{
		log_manager.writeLog("SHOULD NOT BE LOGGED!");
	}

	Vector3 v1 = Vector3(10.0F, 15.0F, 73.0F);

	log_manager.writeLog("X: %f, Y: %f", p3.getX(), p3.getY());

	log_manager.writeLog("Distance between (%f, %f, %f) and (%f, %f, %f): %f", p1.getX(), p1.getY(), p1.getZ(), p2.getX(), p2.getY(), p2.getZ(), p1.distanceToPoint3D(p2));
	log_manager.writeLog("Distance between (%f, %f) and (%f, %f): %f", p3.getX(), p3.getY(), p4.getX(), p4.getY(), p3.distanceToPoint2D(p4));
	log_manager.writeLog("Vector3: X: %f, Y: %f, Z: %f", v1.getX(), v1.getY(), v1.getZ());
	v1.normalize();
	log_manager.writeLog("Normalized: X: %f, Y: %f, Z: %f", v1.getX(), v1.getY(), v1.getZ());

	GraphicsManager& graphics_manager = GraphicsManager::getInstance();

	graphics_manager.shutDown();
	log_manager.shutDown();

	return 0;
}
