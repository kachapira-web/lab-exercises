//program dwells on 'while-loops'
#include <iostream>
using namespace std;
//main function
int main()
{
    //initializing a boolean var.
    bool value = false;
    
    //we also declare input in advance to avoid out-of-scope error
    int input;
    
    //using while-function
    while(!value)
    {
        cout << "Enter integer value between 5 and 10: " << endl;
        cin >> input;
        
        //using an if function
        if(!input)
        {
            cout << "Sorry, you entered an invalid number, please try again: " << endl;
            break;
            cout << "Enter integer value between 5 and 10: " << endl;
        }
        else if(input < 5 && input > 10)
        {
            cout << "You entered " << input << " . Please enter a number between 5 and 10: " << endl;
        }
        //now for a valid input
        else if(input >= 5 && input <= 10)
        {
            cout << "Your input (" << input << ") has been accepted." << endl;
            break;
        }
    }
    return 0;
}