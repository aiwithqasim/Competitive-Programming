#include <iostream>
using namespace std;
int main()
{
	char val1 = 's';
	char val2 = '1';
	char val3 = '1a';
	char val4= ' ';
	
	//checking Alphabat
	if(isalpha(val1))
	{ cout << "The character is an alphabatic = "<<val1 << endl; }
	else
	{ cout << "The character is not an alphabatic = " << val1 << endl; }

	//checking digit
	if (isdigit(val2))
	{ cout << "The character is a digit =  " << val2 << endl; }
	else
	{ cout << "The character is not a digit = " << val2 << endl; }
	
	//checking number
	if (isalnum(val3))
	{ cout << "The character is a number = " << val3 << endl; }
	else
	{ cout << "The character is not a number = " << val3 << endl; }
	
	//checking space
	if (isspace(val4))
	{ cout << "The character is a space = "  << endl; }
	else
	{ cout << "The character is not a space =  " << endl; }

	return 0;

}
