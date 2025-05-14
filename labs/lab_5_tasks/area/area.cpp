//program creates functions for finding areas
#include <iostream>
using namespace std;

/*now we use function prototypes for the functions in main function
this is done to enable function inclusion in main function without 'non-definition' error
For the area or Square*/
int Square(int side);

//for area of Rectangle
int Rectangle(int length, int width);

//for area of triangle
int Triangle(int base, int height);

//main function
int main()
{
    //declaring variables to avoid out-of-scope error
    int length, width, side, base, height;
   
    //function calling basing on the input, using if-statements
    while(true)
    {
        //outputs a display
        cout << "Please select the area of the shape to calculate" << endl;
        cout << "1. Square\n2. Rectangle\n3. Triangle\n4. Quit program \n\nEnter selection: " << endl;
        int input;
        cin >> input;
    
        if(input == 1)
        {
            cout << "Enter length of side: " << endl;
            cin >> side;
            cout << "Area of square : " << Square(side) << endl;
        }
        else if(input == 2)
        {
            cout << "Enter length: " << endl;
            cin >> length;
            cout << "Enter width: " << endl;
            cin >> width;
            
            cout << "Area of Rectangle : " << Rectangle(length, width) << endl;
        }
        else if(input == 3)
        {
            cout << "Enter base: " << endl;
            cin >> base;
            cout << "Enter height: " << endl;
            cin >> height;

            cout << "Area of Triangle : " << Triangle(base, height) << endl;
        }
        else if(input == 4)
        {
        exit(0);
        }
        else
        {
            cout << "Invalid choice, please tyr again" << endl;
        }
    }
    return 0;
}

//function definition, starting with Square
int Square(int side)
{
    int area_S = side * side;
    return area_S;
}

//function definition for rectangle
int Rectangle(int length, int width) 
{
    int area_R = length * width;
    return area_R;
}

//function definition for Triangle
int Triangle(int base, int height)
{
    int area_T = 0.5 * (base * height);
    return area_T;
}