#include <iostream>
#include <string>

using namespace std;

/// <summary>
/// convert minutes into seconds
/// </summary>

void min_sec() {
	cout << "Problem 5" << endl;
	cout << "Minutes to Seconds" << endl;
	cout << endl;

	int minutes;
	cout << "Enter minutes: " << endl;
	cin >> minutes;

	float seconds =(float)minutes * 60;

	cout << minutes << " minutes converts to " << seconds << " seconds" << endl;
}