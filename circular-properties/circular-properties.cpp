//Cameron Bentley

#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	cout << endl;
	cout << "This program calculates useful information about circular stuff." << endl;
	cout << "Inputs are the radius and the number of significant digits." << endl;
	cout << "It gives you info on 2D circles, spheres, and even cylinders!" <<endl;
	cout << "Enter 0 for the number of sig digs to get the default, 8." << endl;
	cout << endl;
	
	//All variables will be initialized here.
	
	double radius = 1;
	int sigdigs = 1;
	int usersigdigs = 1;
	double height = 1;
	
	cout << "Circle radius: "; 
	cin >> radius;
	cout << "Desired sig digs: ";
	cin >> usersigdigs;
	if(usersigdigs==0) {
		sigdigs = 8;
	}
	else {
		sigdigs = usersigdigs;
	}
	cout << endl;
	
	cout << "2D circle of radius " << radius << " with " << sigdigs << " significant digit(s)." << endl;
	cout << "Diameter of circle: " << setprecision(sigdigs) << 2*radius << endl;
	cout << "Area of circle: " << setprecision(sigdigs) << M_PI*pow(radius,2) << endl;
	cout << "Perimeter of circle: " << setprecision(sigdigs) << 2*M_PI*radius << endl;
	cout << endl;
	
	cout << "Sphere of radius " << radius << " with " << sigdigs << " significant digit(s)." <<endl;
	cout << "Volume of sphere: " << setprecision(sigdigs) << 4*M_PI*pow(radius,3)/3 << endl;
	cout << "Surface area of sphere: " << setprecision(sigdigs) << 4*M_PI*pow(radius,2) << endl;
	cout << endl;
	
	cout << "Beginning cylinder calculations. Press ctrl-c to terminate." << endl;
	cout << "Cylinder height: ";
	cin >> height;
	cout << endl;
	
	cout << "Cylinder of radius " << radius << " and height " << height << " with " << sigdigs << " significant digit(s)." << endl;
	cout << "Volume of cylinder: " << setprecision(sigdigs) << M_PI*pow(radius,2)*height << endl;
	cout << "Surface area of cylinder side: " << setprecision(sigdigs) << 2*M_PI*radius*height << endl;
	cout << "Surface area of cylinder tops: " << setprecision(sigdigs) << 2*M_PI*pow(radius,2) << endl;
	cout << "Total cylinder surface area: " << setprecision(sigdigs) << (2*M_PI*radius*height)+(2*M_PI*pow(radius,2)) << endl;
	cout << endl;
	
	return 0;
}