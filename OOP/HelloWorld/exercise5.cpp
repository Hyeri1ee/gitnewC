#include <iostream>
#include <string>
using namespace std;

int main()
{
	//efining variables
	string first;
	string initial;
	string middle;
	string last;
	string space = " ";
	string dot = ".";
	string fullName;
	//input data for first name, initial, and the last name
	cout << "enter the first name : ";
	cin >> first;
	cout << "enter the initial : ";
	cin >> middle;
	cout << "enter the last name : ";
	cin >> last;
	//formation of full name using concatenation operator
	fullName = first + space + initial + dot + middle + space + last;
	cout << "the full name is : " << fullName;
	return 0;

}