//header file includes 'Pragma once'
#pragma once

#include <string>
using namespace std;

class Person{
    public:
        Person();
        Person(float netWeight);

        //deconstructor
        ~Person();
        //overloading the add operator
        float operator + (const Person& otherPerson);

    private:
        float mWeight;
        string mFirstName;
        int mAge;
};