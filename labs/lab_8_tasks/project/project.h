//every 'header.h' needs a pragma apparently
#pragma once

class Box{
    public:
        //apparently we using box alot
        Box();
        //setting Box parameters
        Box(const double newLength,const double newBreadth, const double newHeight);

        ~Box();
        double GetVolume();
        void setLength(double len);
        void setBreadth(double bre);
        void setHeight(double hei);

            //Overload operator + to add two box objects
            Box operator+(const Box& b);
    private:
        double length; //length of the box
        double breadth; //breadth of the box
        double height; //height of the box      
};