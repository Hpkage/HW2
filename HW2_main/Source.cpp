//Source.cpp Hiromi Kageyama September 16, 2020
//Write a c++ program which uses the vector class for a variety of loops

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::cin;
using std::string;

void InputNames(vector<string>) {
	vector<string> names;
	string name;
	names.push_back(name);
	cout << endl;
	names.push_back(name);
	return;
}

int main(int argc, char** argv) {
	void InputNames(vector<string>);
	for (int i = 0; i < 10; i++) {
		string name;
		cout << "Please enter a name: " << endl;
		getline(cin, name);
		cout << endl;

	}
	return 0;
}