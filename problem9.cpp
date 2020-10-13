#include <iostream>
#include <string>

using namespace std;

/// <summary>
/// PROBLEM 9
/// Multiplication table
/// Input the number for which multiplication table needs to be gnerated
/// input number of iterations
/// </summary>

// HELP: Use for loop

void multiplicationTable() {
	cout << "Problem 9" << endl;
	cout << "Multiplication Table" << endl;
	cout << endl;

	int multi_table, iteration;

	cout << "Enter number for which table is to be generated: " << endl;
	cin >> multi_table;

	cout << "Enter number of iterations: " << endl;
	cin >> iteration;

	for (int i = 0; i <= iteration; i++) {
		cout << multi_table << " * " << i << " = " << multi_table * i << endl;
	};
}