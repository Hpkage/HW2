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

int main(int argc, char** argv) {
	vector<string> names;
	for (int i = 0; i < 10; i++) {
		string name;
		cout << "Please enter a name : " << endl;
		getline(cin, name);
		names.push_back(name);
	}
	return 0;
}