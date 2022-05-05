// Calculator_Console.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <cmath>
#include "roots.h"
#include "x_distance.h"

using namespace std;
int main()
{
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;
    double x1 = 0.0;
    double x2 = 0.0;
    double velocity = 0.0;
    double angle = 0.0;
    double height = 0.0;
    int choice;
    while (true)
    {
        cout << "Quadratic Equation's Roots and Projectile Range Calculator" << endl << endl << endl;
        cout << "Press 1 for Roots and 2 for Projectile Range" << endl;
        cin >> choice;
        if (choice == 1)
        {
            roots r;
            while (true)
            {
                cout << "Enter the values of a,b,c (separated by spaces)" << endl;
                cin >> a >> b >> c;
                double discriminant = ((b * b) - (4 * a * c));
                if (discriminant >= 0)
                {
                    cout << "The discriminant of the above eqn is::" << discriminant << endl;
                    cout << "The first root is::" << r.roots1(a, b, c, discriminant) << endl;
                    cout << "The second root is::" << r.roots2(a, b, c, discriminant) << endl << endl << endl;
                }
                else
                {
                    cout << "The discriminant of the above eqn is::" << discriminant << endl;
                    cout << "Hence it's negative which means the roots are imaginary in nature!!" << endl;
                }
                cout << "-----------------------------------" << endl << endl << endl;
                break;
            }
        }
        else {
            x_distance d;
            while (true)
            {
                cout << "Enter the values of height, angle(in degrees), velocity (separated by spaces)" << endl;
                cin >> height >> angle >> velocity;
                angle = angle * 3.1415 / 180; //changing angle from degrees to radians
                cout << "The distance/range covered by the projectile motion is::" << d.distance_final(height, angle, velocity) << endl;
                cout << "-----------------------------------" << endl << endl << endl;
                break;
            }



        }
    }



    return 0;
}