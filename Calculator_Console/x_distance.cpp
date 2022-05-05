#include "x_distance.h"
#include <cmath>

double x_distance::distance_final(double height, double angle, double velocity)
{


	double time;
	double x_distance;
	time = (2 * velocity * sin(angle) / 10);
	time = time / 2 + sqrt((time * time / 4) + (8 * height / 10));
	x_distance = velocity * cos(angle) * time;
	return x_distance;


}