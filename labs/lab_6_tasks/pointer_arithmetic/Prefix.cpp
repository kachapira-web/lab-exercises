#include <iostream>
using namespace std;

//main function
int main()
{
    int x = 3;
    /*the value of 'x' is increased before assigning to 'y'
    thus 'y' is teh value of x++*/
    int y = ++x;

    cout << "x : " << x << endl; //x will be 4
    cout << "y : " << y << endl; //y will be 3

    return 0;
}
//we use pre-increment