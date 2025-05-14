//This is the main function for all 3 files 
#include "project.h"
#include <iostream>
using namespace std;
//main function
int main(){
    Box Box1; //declaring Box1 for type Box
    Box Box2; //declaring Box2 for type Box
    Box Box3; //declaring Box3 for type Box
    double volume = 0.0; //stores the volume of the box here

    //Box1 specifications
    Box1.setLength(6.0);
    Box1.setBreadth(7.0);
    Box1.setHeight(5.0);

    //Box 2 specifications
    Box2.setLength(12.0);
    Box2.setBreadth(13.0);
    Box2.setHeight(10.0);

    //volume of Box1
    volume = Box1.GetVolume();
    cout << "Volume of Box1 is: " << volume << endl;

    //volume of Box2
    volume = Box2.GetVolume();
    cout << "Volume of Box2 is: " << volume << endl;

    //Add the two objects
    Box3 = Box1 + Box2;

    //volume of Box3
    volume = Box3.GetVolume();
    cout << "Volume of Box3 is: " << volume << endl;

    return 0;
}