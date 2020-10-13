#include <iostream>
#include <string>

using namespace std;

/// <summary>
/// PROBLEM 7
/// input integer number from user 
/// print all the even numbers upto and including that number
/// </summary>



// HELP: use a for loop

void even_num() {
	cout << "Problem 7" << endl;
	cout << "Even Numbers" << endl;
	cout << endl;

	int number;
	cout << "Enter an integer: " << endl;
	cin >> number;

	for (int i = 1; i <= number; i++) {
		if (i % 2 == 0) {
			cout << i << " is an even number" << endl;
		}
	};
}