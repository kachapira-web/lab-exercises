#include <iostream>
using namespace std;

int main()
{
    int first_value;
    int second_value;

    int* pPointer = nullptr;

    //assign pointer to the address of first_value
    pPointer = &first_value;
    *pPointer = 10; //indirection

    //assign pointer to the address of second_value
    pPointer = &second_value;
    *pPointer = 20; //indirection

    cout << "First_value: " << first_value << '\n';
    cout << "Second_value: " << second_value << '\n';

    return 0;
}