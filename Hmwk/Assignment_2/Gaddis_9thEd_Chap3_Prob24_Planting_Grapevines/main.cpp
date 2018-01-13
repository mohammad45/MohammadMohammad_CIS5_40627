/* 
 * File:   main.cpp
 * Author: Mohammad Mohammad
 * Created on January 10, 2018, 1:19 PM
 * Purpose:  Create a program to determine how many grapevines to plant
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float numgrap,length,endspace,space;
    //Input or initialize values Here
    cout<<"This program will calculate the amount of grapevines needed to be planted."<<endl;
    cout<<"Please enter the length of the row, in feet."<<endl;
    cin>>length;
    cout<<"Now enter the amount of space used by an end-post assembly, in feet."<<endl;
    cin>>endspace;
    cout<<"Now enter the amount of space between the vines, in feet."<<endl;
    cin>>space;
    //Process/Calculations Here
    numgrap = (length-2*endspace)/space;
    //Output Located Here
    cout<<numgrap<<" grapevines will fit in each row."<<endl;

    //Exit
    return 0;
}

