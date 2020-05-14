#include <iostream>
using namespace std;
#define MAX 1000
int a[MAX]; //Maximum size of Stack
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
        cout << "Stack full";
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
    {
        cout << "Stack is empty";
    }
    else
    {
        top--;
    }
}
void display()
{
    if (isEmpty())
    {
        cout << "stack is empty";
    }
    else
    {
        for (int i = 0; i <= top; i++)
            cout << a[i] <<" ";
    }
}
void peek()
{
    cout<<a[top];
}
//Above are required functions for stact like OverFlow and UnderFlow etc
//following part is the main body of the code.
int main()
{
    push(10);
    push(20);
    push(30);
    push(50);
    display();
    cout <<endl;
    pop();
    pop();
    display();
    cout << endl;
    cout<<"peek value is :";
    peek();
    return 0;
}






