#include<iostream>
using namespace std;
#define MAX 10
char  a[MAX];
int top = -1;
bool isEmpty()
{
    if (top == -1)
        return true;
    else
        return false;
}
void push(char x)
{
    if (top == MAX - 1)
    { cout << "OverFlow" << endl;}
    else
    {      top++;
            a[top] = x; }
}
void pop()
{
    if (isEmpty())
    {  cout << "UnderFlow"; }
    else
    { cout << a[top] << " ";
        top--; }
}
void display()
{
    if (isEmpty())
    { cout << "stack is empty" << endl; }
    else
    {    for (int i = 0;i <= top;i++)
            cout << a[i] << " "; }
}
void peek()
{
    cout << "The Peek Value = " << a[top] << endl;
}
//Above are required functions for stact like OverFlow and UnderFlow etc
//following part is the main body of the code.
int main()
{
    char x;
    cout << "Enter Characters :" << endl;
    for (int i = 0;i < MAX;i++)
    {
        cin >> x;
        push(x);
    }
    cout << "Entered Charachters :" << endl;
    display();
    cout<<endl;
    cout <<"In Reversed Order:" << endl;
    for (int i = 0;i<MAX;i++)
    {
        pop();
    }
    return 0;
}
