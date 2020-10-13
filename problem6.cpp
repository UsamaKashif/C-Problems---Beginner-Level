#include <iostream>
#include <string>

using namespace std;

/// <summary>
/// PROBLEM 6
/// find area of right angle triangle
/// input base and height from user
/// </summary>

void area_triangle() {
	cout << "Problem 6" << endl;

	int base, height;
	cout << "Enter base of the triangle: " << endl;
	cin >> base;

	cout << "Enter height of the triangle: " << endl;
	cin >> height;

	float area = 0.5 * base * height;

	cout << "Area of triangle is: " << area << endl;
}