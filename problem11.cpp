#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

/// <summary>
/// PROBLEM 11
/// input a number from user 
/// generate a pyramid with a base of that number and a height of that number
/// </summary>


void pyramid() {
	cout << "Problem 11" << endl;
	cout << "Pyramid" << endl;
	cout << endl;

	int number;
	cout << "Enter a number: " << endl;
	cin >> number;
	
	for (int i = 0; i < number; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}

}