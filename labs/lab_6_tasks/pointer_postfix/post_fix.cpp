//same as prefix except for position of increment symbol
#include <iostream>
using namespace std;

//main function
int main()
{
    int x = 3;
    /*value of x is incremented before being assigned to y
    thus y is an increment of x*/
    int y = x++;

    cout << "x : " << x << endl; //becomes 4
    cout << "y : " << y << endl; //remains the same

    return 0;
}