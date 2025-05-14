#include <iostream>
using namespace std;

//main function
int main()
{
    int numbers_array[5];
    int* pPointer = nullptr;

    //assigning array to pointer auto assigns pointer to address of first element
    pPointer = numbers_array;
    
    //assigning value to first element
    *pPointer = 10;

    /*increment the pointer using pointer arithmetic
    to assign value to second element in the array*/
    pPointer++;
    *pPointer = 20;

    //assign value of third element to the pointer
    pPointer = &numbers_array[2];
    *pPointer = 30; //assigns value to the third element

    //assigning value to fourth value using pointer arithmetic
    pPointer = numbers_array + 3;
    *pPointer = 40;
    
    //????? assign the address of thefirst element tot he pointer?
    pPointer =  numbers_array;

    //assign the value of fifth using indirection and pointer arithmetic
    *(pPointer + 4) = 50;

    //iterate and output all the values
    for(int n = 0; n < 5; n++)
    {
        cout << numbers_array[n] << ", ";
    }
    return 0;
}