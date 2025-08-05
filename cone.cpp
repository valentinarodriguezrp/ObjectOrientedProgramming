/************************************************************
Valentina Rodriguez
Programming Project 1: Volume and Surface Area of a Right Cone
Date: Jan 29, 2025
************************************************************/

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main() {

	double V, S, r, h;

	cout << "Volume of the Surface Area of a Right Cone Calculator" << endl;

	cout << "Enter Radius: ";
	cin >> r;
	cout << "Enter Height: ";
	cin >> h;

	V = (1.0 / 3.0) * M_PI * pow(r, 2) * h;
	S = M_PI * r * sqrt((pow(r, 2)) + (pow(h, 2))) + M_PI * (pow(r, 2));

	cout << "The Volume of the Cone is: " << V << endl;
	cout << "The Surface Area of the Cone is: " << S << endl;


	return 0;
}