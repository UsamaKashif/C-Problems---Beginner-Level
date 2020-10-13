#include <iostream>
#include <string>

using namespace std;

/// <summary>
/// PROBLEM 3
/// input 3 integers from user
/// print largest number 
/// print smallest number
/// </summary>

void largest_smallest() {
	cout << "PROBLEM 3" << endl;

	int num1, num2, num3;
	int largest = 0;
	int smallest = 0;

	cout << "Enter three integers: " << endl;
	cin >> num1 >> num2 >> num3;

	// finding the largest
	if (num1 > num2 && num1 > num3) {
		largest = num1;
	}
	else if (num2 > num1 && num2 > num3) {
		largest = num2;
	}
	else if (num3 > num1 && num3 > num2) {
		largest = num3;
	};

	
	// finding the smallest
	if (num1 < num2 && num1 < num3) {
		smallest = num1;
	}
	else if (num2 < num1 && num2 < num3) {
		smallest = num2;
	}
	else if (num3 < num1 && num3 < num2) {
		smallest = num3;
	};


	if (num1 == num2 == num3) {  // check if all numbers are equal
		cout << "All integers are equal" << endl;
	}
	else {
		cout << "Largest number is: " << largest << " Smallest number is: " << smallest << endl;
	};

}