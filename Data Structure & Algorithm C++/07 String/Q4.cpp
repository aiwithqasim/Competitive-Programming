#include<iostream>
using namespace std;
int main()
{
	int MAX=1000;
	char input[MAX];
	int count=0;
	cout<<"--------------------------------------------------------------------------------------"<<endl;
	cout<<"\t\tCOUNTING OF CHARACTERS UNTIL USER ENTER (Ctrl+Z)"<<endl;
	cout<<"NOTE: \n\t1-Size of input array is "<<MAX<<"."<<endl;
	cout<<"\t2-Counting Should be done the counter at the backend upon (ctrl+ Z) you will se the total count "<<endl;
	cout<<"--------------------------------------------------------------------------------------"<<endl;
	cout<<"Enter characterized input."<<endl;
	for (int i=0;i<MAX;i++)
	{
		cin>>input[i];
		if(input[i]==(!cin.eof()))
		{
			cout<<"ALERT! Signal input stops bY user through (ctrl +Z)"<<endl;
			break;
		}
		else
		{
		        count=count+1;
		}
	}
	cout<<"--------------------------------------------------------------------------------------"<<endl;
	cout<<"Copy of every character input is: "<<endl;
	for (int i=0;i<count;i++)
	{
		cout<<input[i]<<" ";
	}
	cout<<endl;
	cout<<"Number of characters is "<<count<<"."<<endl;
	return 0;
}
