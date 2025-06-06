#include <iostream>
using namespace std;

int main()
{
    int number_of_elements = 0;
    int* dynamic_array = nullptr;

    cout << "How many numbers would you like to type?: " << endl;
    cin >> number_of_elements;

    dynamic_array = new int [number_of_elements];

    if(dynamic_array == nullptr)
    {
        cout << "Error:  memory could not be located" << endl;
    }
    else{
        for(int i = 0;i < number_of_elements; i++)
        {
            cout << "Enter number of elements: " << endl;
            cin >> dynamic_array[i];
        }
        cout << "You have entered: ";
        for(int j = 0; j < number_of_elements;j++)
        {
            cout << dynamic_array[j] << ", ";
                }
                delete [] dynamic_array;
        }
    return 0;
}