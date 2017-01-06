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
	float radius = 1;
	int sigdigs = 6;
	int usersigdigs;
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
	cout << "Area of circle: " << setprecision(sigdigs) << M_PI*pow(radius,2) << endl;
	cout << "Perimeter of circle: " << setprecision(sigdigs) << 2*M_PI*radius << endl;
	cout << endl;
	
	cout << "Sphere of radius " << radius << " with " << sigdigs << " significant digit(s)." <<endl;
	cout << "Volume of sphere: " << setprecision (sigdigs) << 4*M_PI*pow(radius,3)/3 << endl;
	cout << "Surface area of sphere: " << setprecision (sigdigs) << 4*M_PI*pow(radius,2) << endl;
	cout << endl;
	
	return 0;
}