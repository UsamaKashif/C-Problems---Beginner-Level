#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

/// <summary>
/// PROBLEM 12
/// free coffee cups
/// buy 6 get 1 free
/// input number of coffee cups
/// calculate how many cups you will recieve
/// </summary>


void coffeeCups() {
	cout << "Problem 12" << endl;
	cout << "Free Coffee Cups" << endl;
	cout << endl;

	int coffee_cups, extra_cups = 0;
	cout << "Enter number of coffee cups you want to order: " << endl;
	cin >> coffee_cups;

	for (int i = 1; i <= coffee_cups; i++) {
		if (i % 6 == 0) {
			extra_cups++;
		}
	};

	cout << "Total Cofee Cups: " << coffee_cups + extra_cups << endl;
}