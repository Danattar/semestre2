#ifndef UTILITIES_CPP
#define UTILITIES_CPP
#include <iostream>
#include <string>
using namespace std;

bool inRange(int value, int min, int max) {
	return (value >= min && value <= max ? true : false);
}

int getInput(const string& MESSAGE, int max, int min) {
	int value = 0;
	cout << MESSAGE;

	while (!(cin >> value) || !(inRange(value, min, max))) {
		cin.clear();
		cin.ignore(numeric_limits<int>::max(), '\n');
		cout << MESSAGE;
	}
	cin.ignore(numeric_limits<int>::max(), '\n');
	return value;
}

#endif // !UTILITIES_CPP
