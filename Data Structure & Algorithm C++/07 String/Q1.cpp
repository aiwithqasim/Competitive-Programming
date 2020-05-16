#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1;
	cout << "Enter Your String = ";
	getline(cin, str1);
	cout << "String Length is =" << str1.length();
	return 0;
}
