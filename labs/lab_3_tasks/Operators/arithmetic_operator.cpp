#include <iostream>
using namespace std;
//main function
int main()
{
    int a = 21;
    int b = 10;
    int c;
    //addition operator
    c = a + b;
    cout << "a + b = " << c << endl;
    //subtraction operator
    c = a - b;
    cout << "a - b = " << c << endl;
    //multiplication operator
    c = a * b;
    cout << "a * b = " << c << endl;
    //division operator
    c = a / b;
    cout << "a / b = " << c << endl;
    //modulus op.
    c = a % b;
    cout << "a % b = " << c << endl;
    //increment
    c = c++;
    cout << "C++ = " << c << endl;
    //decrement
    c = c--;
    cout << "c-- = " << c << endl;
    return 0;
}