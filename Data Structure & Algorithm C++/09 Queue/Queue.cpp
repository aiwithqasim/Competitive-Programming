#include <iostream>
using namespace std;

//Setting Size of Array
#define size 5
int item[size];
int rear=-1;
int front=-1;

//Checking Array is Empty or Not
bool isEmpty()
{
	
	if(front==-1 && rear==-1 || front>rear)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//Checking Array is Full or Not
bool isFull()
{
	if(rear==size-1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//pusinng same like Stack through enqueue
void enqueue(int data)
{
	if(isFull())
	{
		cout<<"Queue is Full"<<endl;
	}
	else
	{
		if(front==-1)
		front=0;
		rear++;
		item[rear]=data;
	}
}

//poping like Stack through dequeue
int dequeue()
{
	if(isEmpty())
	{
		cout<<"Queue is Empty"<<endl;
	}
	else
	{
		item[front++];
	}
}

//Dieplaying Elements of Queue
void Display()
{
	if(isEmpty())
	{
		cout<<"Queue is Empty"<<endl;
	}
	else
	{
		for(int i=front; i<=rear; i++)
		{
			cout<<item[i]<<endl;
		}
	}
}

//Mian
int main()
{
	enqueue(1);
	enqueue(2);
	enqueue(3);
	dequeue();
	dequeue();
	enqueue(4);
	enqueue(5);
	Display();

}
