#include <iostream>
using namespace std;
int main()
{
	cout << "Size of short int is " << sizeof(short int) << "bytes." << endl;
	cout << "Size of int is  "<< sizeof(int) << "bytes." << endl;
	cout << "Size of long int is  "<< sizeof(long int) << "bytes." << endl;
	cout << "Size of long double is  " << sizeof(double) << "bytes." << endl;
	cout << "Size of long int is  " << sizeof(bool) << "bytes." << endl;
	cout << "Size of char is  " << sizeof(char) << "bytes." << endl;
	return 0;
}