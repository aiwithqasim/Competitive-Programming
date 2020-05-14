#include <iostream>
using namespace std;
int fibonnaci(int x) {
    if ((x == 1) || (x == 0)) {
        return(x);
    }
    else {
        return(fibonnaci(x - 1) + fibonnaci(x - 2));
    }
}
int main() {
    int x;
    cout << "Enter Any Number For Fibonnaci series  = ";
    cin >> x;
    cout << "Fibonnaci Series  Will be "<<endl;
    for (int i=0;i < x;i++) 
    {
        cout << " " << fibonnaci(i);
    }
    return 0;
}
