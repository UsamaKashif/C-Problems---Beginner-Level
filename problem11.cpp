#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

/// <summary>
/// PROBLEM 11
/// input a number from user 
/// generate a pyramid with a base of that number and a height of that number
/// </summary>


void calculator() {
	cout << "Problem 11" << endl;
	int number;
	cout << "Enter a number: " << endl;
	cin >> number;
	
	for (int i = number; i > 0; i--) {
		cout << setw(i);
		cout << "****" << endl;
	}

}