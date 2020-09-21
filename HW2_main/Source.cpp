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

void InputNames(vector<string> & names) {
	for (int i = 0; i < 10; i++) {
		string name;
		cout << "Please enter a name: ";
		getline(cin, name);
		names.push_back(name);
	}
	return;
}

int main() {
	vector<string> names;
	InputNames(names);
	return 0;
}