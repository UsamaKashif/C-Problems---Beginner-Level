#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

/// <summary>
/// PROBLEM 13
/// factorial
/// input a number
/// print factorial of that number
/// </summary>


void factorial() {
	cout << "Problem 13" << endl;
	cout << "Factorial" << endl;
	cout << endl;

	int number;
	cout << "Enter number: " << endl;
	cin >> number;

	int total = 1;
	for (int i = 1; i <= number; i++) {
		total = total * i;
	};

	cout << "Factorial of " << number << " is " << total << endl;
}