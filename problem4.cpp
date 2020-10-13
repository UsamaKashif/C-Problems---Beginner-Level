#include <iostream>
#include <string>

using namespace std;

/// <summary>
/// PROBLEM 4
/// divide 2 numbers
/// </summary>

void division() {
	cout << "Problem 4" << endl;
	cout << "" << endl;

	int num1, num2;
	cout << "Enter 2 integers: " << endl;
	cin >> num1 >> num2;

	float result = (float)num1 / (float)num2;

	cout << "num1 / num2: " << result << endl;

}