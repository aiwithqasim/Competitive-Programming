#include<iostream>
using namespace std;
#define MAX 1000
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
    {cout << "OverFlow" << endl;}
    else
    {top++;
        a[top] = x;}
}
void pop()
{
    if (isEmpty())
    { cout << "UnderFlow";}
    else
    {top--;}
}
void display()
{
    if (isEmpty())
    {cout << "stack is empty";}
    else
    {     for (int i = 0;i <= top;i++)
            cout << a[i] << endl; }
}
void peek()
{
    cout << "The Peek Value = " << a[top] << endl;
}
//Above are required functions for stact like OverFlow and UnderFlow etc
//following part is the main body of the code.
int main()
{
    cout << "Operation's will be : E A S * Y * Q U E * * S T * * * I 0 * N * * *" << endl;
    push('E');
    push('A');
    push('S');
    pop();
    push('Y');
    pop();
    push('Q');
    push('U');
    push('E');
    pop();
    pop();
    push('S');
    push('T');
    pop();
    pop();
    pop();
    push('I');
    push('O');
    pop();
    push('N');
    pop();
    pop();
    pop();
    cout << "New Stack  :" << endl;
    display();
    return 0;
}
