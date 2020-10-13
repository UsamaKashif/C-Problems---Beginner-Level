#include <iostream>
#include <string>

using namespace std;

/// <summary>
/// PROBLEM 10
/// basic calculator
/// input 2 integers
/// ask user for arithmetic operation
/// print the result
/// </summary>


void calculator() {
	cout << "Problem 10" << endl;
	cout << "Basic Calculator" << endl;
	cout << endl;

	int num1, num2, arithmetic_operation;
	cout << "Enter 2 numbers: " << endl;
	cin >> num1 >> num2;

	cout << "Arithmatic operations" << endl;
	cout << "1: Addition\n" << "2: Subtraction\n" << "3: Multiplication\n" << "4: Division" << endl;
	cout << "Enter (1, 2, 3, 4)" << endl;
	cin >> arithmetic_operation;

	switch (arithmetic_operation) {
	case 1:
		cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
		break;
	case 2:
		cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
		break;
	case 3:
		cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
		break;
	case 4:
		cout << num1 << " / " << num2 << " = " << (float)num1 / (float)num2 << endl;
		break;
	default:
		cout << "Invalid Operation" << endl;
		break;
	};
}