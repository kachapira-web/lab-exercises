//program prints values from an array
#include <iostream>
#include <string> //for output of strings
using namespace std;
//main function
int main()
{
    //array declaration/initialisation
    string values [] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    
    //using a loop statement
    for(int i = 0;i < 8;i++)
    {
        if(values [i][0] == 'B'){
            cout << values[i] << endl;
        }
    }
    return 0;
 }
