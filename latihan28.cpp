#include <iostream>
include<string>

	using namespace std;

int main()
{
	string str1 = "STMIK";
	string str2 = "PENUSA";

	// Concotenation
	string result = str1 + " " + str2;
	cout << "Concenated: " << result << std::endl;

	// Length
	size_t length = result.length();
	cout << "Length: " << length << std::endl;
	// substring
	string sub = result.substr(6, 6);
	cout << "Substring: " << sub << std::endl;

	// find
	size_t pos = result.find("PENUSA");
	cout << "Position of 'PENUSA': " << pos << std::endl;

	// Replace
	result.replace(0, 5, "Hi");
	cout << "Replaced: " << result << std::endl;

	return 0;
}