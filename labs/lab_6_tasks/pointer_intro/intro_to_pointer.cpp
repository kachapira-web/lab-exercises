//program dwells on pointer
#include <iostream>
using namespace std;

//main function
int main()
{
    //pointer declaration and initialization to avoid errors
    int* pPointer = nullptr;
    
    int integer_value = 5;

    //assign pointer to address of object
    pPointer = &integer_value;

    //output value of integral_value
    cout << "Integral_value : " << integer_value << endl;

    //output address of integer_value
    cout << "Address of integer_value : " << &integer_value << endl;

    //output address of assigned pointer
    cout << "pPointer: " <<pPointer << endl;

    //output of address of assigned pointer
    cout << "Address of pointer : " << &pPointer << endl;

    return 0;
}