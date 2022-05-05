#include "roots.h"
#include <cmath>
double roots::roots1(double a, double b, double c, double discriminant)
{
	double x1;
	x1 = (-b + sqrt(discriminant)) / (2 * a);
	return x1;

}

double roots::roots2(double a, double b, double c, double discriminant)
{
	double x2;
	x2 = (-b - sqrt(discriminant)) / (2 * a);
	return x2;
}
