#include<iostream>
using namespace std;
#define MAX 10
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
        cout << "Stack full" << endl;
    }
    else
    {
        if (x >= 1 && x <= 30)
        {
            top++;
            a[top] = x;
        }
        else
        {
            cout << "Enter Number From 1 to 30 " << endl;
        }
    }
}
void pop()
{
    if (isEmpty())
    {
        cout << "OverFlow";

    }
    else
    {
        if (a[top] % 2 == 0)
        {
            top--;
        }
        else
        {
            cout << a[top] << endl;
            top--;
        }
    }
}
void display()
{
    if (isEmpty())
    {
        cout << "UnderFlow"<<endl;
    }
    else
    {
        for (int i = 0;i <= top;i++)
            cout << a[i] << endl;
    }
}
void peek()
{
    cout << "The Peek Value = " << a[top] << endl;
}
//Above are required functions for stact like OverFlow and UnderFlow etc
//following part is the main body of the code.

int main()
{
    int x;
    cout << "Enter Values :" << endl;
    for (int i = 0;i < MAX;i++)
    {
        cin >>x;
        push(x);
    }
    cout << "Stack Values :" << endl;
    display();
    peek();
    cout << "Odd Pop Values :" << endl;
    for (int i = 0;i < MAX;i++)
    {
        pop();
    }
    display();
    peek();
    return 0;
}
