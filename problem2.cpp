#include <iostream>
#include <string>

using namespace std;

/// <summary>
/// PROBLEM 2
/// input name from the user 
/// print hello (name)
/// </summary>

void greetings() {
	cout << "PROBLEM 2" << endl;

	string name;
	cout << "Enter your name: " << endl;
	getline(cin, name);
	cout << "Hello " << name << endl;
}