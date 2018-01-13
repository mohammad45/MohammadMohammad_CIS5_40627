
/* 
 * File:   main.cpp
 * Author: Mohammad Mohammad
 *
 * Created on January 6, 2018, 11:00 PM
 * Purpose: Calculate how many slices in a pizza Pie
 */

//System Libraries
#include <iostream>

using namespace std;
float diam, //The diameter
      rad, //The diameter divided by two
      slices, //The total amount of slices
      area; //The area of the pizza entered
      
/*
 * 
 */
int main(int argc, char** argv) {
    cout<<"This program was designed to calculate how many slices of pizza there are."<<endl;
    cout<<"Please put the diameter of the pizza"<<endl;
    cin>>diam;
    rad = diam/2; //Radius = diameter / 2
    area = 3.14159*(rad*rad); //Area = PiR^2
    slices = area/14.125;
    cout<<"The amount of slices possible on that pizza is "<<slices<<" slices."<<endl;
    return 0;
}


