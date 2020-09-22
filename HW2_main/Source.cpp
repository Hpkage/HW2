//Source.cpp Hiromi Kageyama Sept. 21, 2020
//write a c++ program that uses a vector class with a variety of loops

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::cout;
using std::cin;
using std::getline;
using std::endl;
using std::vector;
using std::string;

//parameter of the main function
void InputNames(vector<string>& names) {
	for (int i = 0; i < 10; i++) {
		string name;
		cout << "Please enter a name: ";
		getline(cin, name);
		names.push_back(name);
	}
	return;
}

//searches for the name you type to see if it exists
bool DoesNameExist(const string& nameToFind, const vector<string>& names) {
	for (int i = 0; i < 10; i++) {
		if (names[i] == nameToFind) {
			return true;
		}
	}
	return 0;
}

//prints out all of the names you typed in
void PrintNames(vector<string>& names) {
	cout << endl;
	string name;
	cout << "These are all of the names you typed in:" << endl;
	cout << name << endl;
}

//this program's main funtion
int main() {
	//calls the InputNames function
	vector<string> names;
	InputNames(names);
	cout << endl;

	//calls the DoesNameExist function
	string nameToFind;
	cout << "Enter a name you just typed to see if it exists: ";
	cin >> nameToFind;
	if (DoesNameExist(nameToFind, names)) {
		cout << "That name exists.";
	}
	else {
		cout << "That name does not exist.";
	}
	cout << endl;

	//calls the printNames function
	PrintNames(names);

	return 0;
}