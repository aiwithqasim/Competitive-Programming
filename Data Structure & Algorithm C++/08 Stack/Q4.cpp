#include<iostream>
using namespace std;
#define MAX 5
int  a[MAX];
int top = -1;
bool isEmpty()
{
    if (top == -1)
        return true;
    else
        return false;
}
void push(int x)
{
    if (top == MAX - 1)
    {
        cout << "OverFlow" << endl;
    }
    else
    {
        top++;
        a[top] = x;
    }
}
void pop()
{
    if (isEmpty())
    { cout << "UnderFlow";    }
    else
    {
        int factorial=1;
        for (int i = 1; i <= a[top]; ++i)
        { factorial *= i; }
        cout << "Factorial of " << a[top] << " = " << factorial<<endl;
        top--;
    }
}
void display()
{
    if (isEmpty())
    { cout << "stack is empty" << endl;  }
    else
    {    for (int i = 0;i <= top;i++)
            cout << a[i] <<endl; }
}
void peek()
{ cout << "The Peek Value = " << a[top] << endl; }
//Above are required functions for stact like OverFlow and UnderFlow etc
//following part is the main body of the code.
int main()
{
    int x;
    cout << "Enter five Values :" << endl;
    for (int i = 0;i < MAX;i++)
    {  cin >> x;
        push(x); }
    cout << "Entered Values Factorial :" << endl;
    for (int i = 0;i < MAX;i++)
    { pop();}
    return 0;
}
