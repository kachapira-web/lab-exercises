//program will be using the 'fstream' functionality
#include <iostream>
#include <fstream>//for reading-writing from files
#include <string> //for managing string variables
#include <sstream> //for string-based input/output operations
using namespace std;

//main function
int main()
{
    //since program requires use of a string
    string file_Data;

    //preparing a text file
    ofstream myfile("values.txt");
    //writing on file
    if(myfile.is_open())
    {
        myfile << "This is the Advanced Computer Programming Module" << endl;
    }
    else
    {
        cout << "Unable to open the file" << endl;
    }

    //using a buffer, we assign content of file to string
    ifstream outfile("module.txt");

    //using if-functions
    if(!(myfile.is_open()))
    {
        cout << "Unable to open file" << endl;
    }

    stringstream buffer;
    buffer << myfile.rdbuf();
    file_Data = buffer.str();
    myfile.close();
    //prints out content of file
    cout << "Content of file\n" << file_Data << endl;
    return 0;
}