#include <iostream>
#include <string>
using namespace std;
int main()
{	string str1, str2, substring,copy;
	//given Strings
	str1 = "A line is the path of one point moving";
	str2 = "line is a type of geometric figure";
	//display
	cout << "String 1 = A line is the path of one point moving..."<<endl;
	cout << "String 2 = line is a type of geometric figure..."<<endl;
	
	//finding word "line"
	cout << "'line' found at : " << str1.find("line") << " in String 1"<<endl;
	
	//substring Function
	substring = str1.substr(str1.find("point moving"), str1.find("point moving") + 12);
	cout << "Sub String : " << substring<<endl;
	
	//length of both strings
	cout << "Length Of string 1 = " << str1.length()<<endl;
	cout << "Length Of string 2 = " << str2.length()<<endl;
	
	//using removw function
	cout << "Removing 'type' from string 2" << endl;
	str2.erase(str2.find("type"),4);
	cout <<"New String 2 :"<< str2 << endl;
	
	//using replace function
	cout << "Replacing “moving” from string 1 with “ Despicable me!!” "<<endl;
	str1.replace(str1.find("moving"), 6, "Despicable me!!");
	cout << "New string will be :" << str1 << endl;
	
	//using copy function
	cout << "Copy “line is the path” from string 1 to string 2" << endl;
	copy = str1.substr(str1.find(" line is the path"), str1.find(" line is the path") + 17);
	
	return 0;
}
