#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

/// <summary>
/// PROBLEM 14
/// input 3 grades < 100
/// if the difference between next multiple of 5 is less than 3
/// round the grade to that next multiple of 6
/// </summary>


void grades() {
	cout << "Problem 14" << endl;
	cout << "Rounding Grades" << endl;
	cout << endl;

	int g1, g2, g3;
	cout << "Enter 3 grades: " << endl;
	cin >> g1 >> g2 >> g3;

	// calculations for grade 1
	if ((g1 + 1) % 5 == 0) {
		g1 = g1 + 1;
	}
	else if ((g1 + 2) % 5 == 0) {
		g1 = g1 + 2;
	}
	else if ((g1 + 3) % 5 == 0) {
		g1 = g1 + 3;
	}

	// calculations for grade 2
	if ((g2 + 1) % 5 == 0) {
		g2 = g2 + 1;
	}
	else if ((g2 + 2) % 5 == 0) {
		g2 = g2 + 2;
	}
	else if ((g2 + 3) % 5 == 0) {
		g2 = g2 + 3;
	}

	// calculations for grade 3
	if ((g3 + 1) % 5 == 0) {
		g3 = g3 + 1;
	}
	else if ((g3 + 2) % 5 == 0) {
		g3 = g3 + 2;
	}
	else if ((g3 + 3) % 5 == 0) {
		g3 = g3 + 3;
	}
	cout << "Grade 1: " << g1 << endl;
	cout << "Grade 2: " << g2 << endl;
	cout << "Grade 3: " << g3 << endl;
}