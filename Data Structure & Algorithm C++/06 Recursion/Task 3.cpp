#include <iostream>
using namespace std;
int moves(0);
void Hanoi(int m, char a, char b, char c);

void Hanoi(int m, char a, char b, char c) {
    moves++;
    if (m == 1) {
        cout << "Move disc " << m << " from " << a << " to " << c << endl;
    }
    else {
        Hanoi(m - 1, a, c, b);
        cout << "Move disc " << m << " from " << a << " to " << c << endl;
        Hanoi(m - 1, b, a, c);
    }
}
int main()
{
    /* What program will do ?
    move disc 1 A to c ACB
    move disc 2 A to b ABC
    move disc 1 C to b CBA 
    move disc 3 A to c ACB 
    move disc 1 B to a BAC 
    move disc 2 B to c BCA 
    move disc 1 A to c ACB */
    int discs;
    cout << "Enter the number of discs =  ";
    cin >> discs;
    Hanoi(discs, 'A', 'B', 'C');
    cout << "It took " << moves << " moves." << endl;
    system("pause");
}
