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

void InputNames(vector<string>& names) {
	for (int n = 0; n < 10; n++) {
		int i = n;
		cin >> i;
		cout << i << endl;
	}
	return;
}

int main(int argc, char** argv) {
	vector<string> names;
	for (int i = 0; i < 10; i++) {
		string name;
		cout << "Please enter a name: " << endl;
		getline(cin, name);
		cout << endl;
		names.push_back(name);
	}
	void InputNames(vector<string> & names);
	return 0;
}