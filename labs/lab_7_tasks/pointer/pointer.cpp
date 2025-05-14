#include <iostream>
using namespace std;
//program swaps values of two numbers

//function declaration
void SwapNumber(int* num1, int* num2);

int main(){
    int varA = 25;
    int varB = 100;
    
    cout << "varB before swap: " << varA << endl;//varA is 25
    cout << "varB before swap: " << varB << endl;//varB is 100

    //swapping number
    SwapNumber(&varA, &varB);
    cout << "varA after swap: " << varA << endl;
    cout << "varB after swap: " << varB << endl;

    return 0;
}

//function definition
void SwapNumber(int* num1, int* num2){
    int value = *num1; //creates and assigns value by reference
    *num1 = *num2;//value is passed to num2 
    *num2 = value;//value is reswapped to initial var
}