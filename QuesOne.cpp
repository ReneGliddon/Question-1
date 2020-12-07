#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14;

double calcVolume(double width, double height, double length);
//function to calculate the volume of a box

double calcVolume(double radius);
//function to calculate the volume of a sphere

double calcVolume(double radius, double height);
//function to calculate the volume of a cylinder

int main()
{
 string shape;
 double radius;
 double height;
 double volume;
 double width;
 double length;

 int test;

 //loop to run once then test for correct input
 do
    {
        //request object type
        cout<<"Which 3D object's volume do you want to calculate? (sphere, cylinder or box)  ";
        cin >> shape;

        //request info, call functions and print volume to screen
        if (shape == "sphere")
            {
                cout<<"\nEnter the radius of the sphere in cm:  ";
                cin >> radius;
                volume = calcVolume(radius);
                cout << "\nThe volume of the sphere is "<< volume<<" cubed cm.";
            }
        else if (shape == "cylinder")
            {
                cout<<"\nEnter the radius of the cylinder in cm:  ";
                cin >> radius;
                cout <<"\nEnter the height of the cylinder in cm:  ";
                cin>>height;
                volume = calcVolume(radius, height);
                cout << "\nThe volume of the cylinder is "<< volume << " cubed cm.";
            }

        else if (shape == "box")
            {
                cout<<"\nEnter the width of the box in cm: ";
                cin >> width;
                cout <<"\nEnter the length of the box in cm: ";
                cin>>length;
                cout <<"\nEnter the height of the box in cm: ";
                cin>>height;

                volume = calcVolume(width, length, height);
                cout << "\nThe volume of the box is "<< volume<<" cubed cm.";
            }

        //if incorrect info was typed in
        else
            {
                cout<<"\nError. Please enter 'sphere', 'cylinder' or 'box' when prompted.\n\nRestarting program...\n\n";

            }
        //set sentinel value if incorrect object type was typed in
      if (shape == "cylinder" || shape == "box" || shape == "sphere" )
        test = 1;
      else
        test = 0;
 } while(test == 0);

 return 0;
}

//sphere volume
double calcVolume(double radius)
{
    return ((4.00/3.00)*(PI*(pow(radius, 3))));
}

//cylinder volume
double calcVolume(double radius, double height)
{
    return (PI*(pow(radius, 2))*height);
}

//rectangular prism or box's volume
double calcVolume(double width, double length, double height)
{
    return (width*length*height);
}
