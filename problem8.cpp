#include <iostream>
#include <string>

using namespace std;

/// <summary>
/// PROBLEM 8
/// input integer number from user 
/// print all the odd numbers upto and including that number
/// </summary>



// HELP: use a for loop

void odd_num() {
	cout << "Problem 8" << endl;
	cout << "Odd Numbers" << endl;
	cout << endl;

	int number;
	cout << "Enter an integer: " << endl;
	cin >> number;

	for (int i = 1; i <= number; i++) {
		if (i % 2 != 0) {
			cout << i << " is an odd number" << endl;
		}
	};
}