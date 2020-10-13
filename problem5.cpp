#include <iostream>
#include <string>

using namespace std;

/// <summary>
/// convert minutes into seconds
/// </summary>

void min_sec() {
	cout << "Problem 5" << endl;

	int minutes;
	cout << "Enter minutes: " << endl;
	cin >> minutes;

	float seconds = minutes * 60;

	cout << minutes << " minutes converts to " << seconds << " seconds" << endl;
}