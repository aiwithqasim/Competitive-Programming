#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str1,str2,result;
	cout << "Enter Your First Name = ";
	getline(cin, str1);
	cout << "Enter Your Last Name = ";
	getline(cin, str2);
	str1.insert(str1.length(), " ");
	cout << "Your Full Name is = "<<str1 + str2;
}
