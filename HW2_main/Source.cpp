//Source.cpp Hiromi Kageyama September 16, 2020
//Write a c++ program which uses the vector class for a variety of loops

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

//sets the parameter for the main function
void InputNames(vector<string>) {
	vector<string> names;
	string name;
	names.push_back(name);
	cout << endl;
	names.push_back(name);
	return;
}

//searches for a name and returns true or false
bool DoesNameExist(const string, const vector<string>) {
	vector<string> names;
	bool nameExists = true;
	if (names() > 10) {
		nameExists = false;
	}
	return 0;
}

//main function of this program
int main(int argc, char** argv) {
	int n, i;
	for (i = 0; i < 10; i++) {
		string name;
		cout << "Please enter a name: " << endl;
		getline(cin, name);
		cout << endl;
		void InputNames(vector<string>);
	}
	string nameExists;
	cout << "Enter a name you entered to see if it exists: ";
	cin >> nameExists;
	if (DoesNameExist(nameExists) < 1);
		cout << "It exists.";
	else 		
		cout << "It does not exist.";
	cout << endl;
	return 0;
}