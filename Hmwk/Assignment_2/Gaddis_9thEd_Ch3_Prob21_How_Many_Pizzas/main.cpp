
/* 
 * File:   main.cpp
 * Author: Mohammad Mohammad
 *
 * Created on January 6, 2018, 12:07 PM
 * Purpose: Calculate how many pizzas there are
 */

//System Libraries
#include <iostream>

using namespace std;
float diam, //The diameter
      rad, //The diameter divided by two
      slices, //The total amount of slices
      area,   //The area of the pizza entered
      numppl,  //The number of people at the party
      pizzas; //The total amount of pizzas
      
/*
 * 
 */
int main(int argc, char** argv) {
    cout<<"This program was designed to calculate how many pizzas need to be"<<endl;
    cout<<"Ordered in order to satisfy a large party."<<endl;
    cout<<"Please put the diameter of the pizza"<<endl;
    cin>>diam;
    cout<<"Now please put the number of people who will be attending the party"<<endl;
    cin>>numppl;
    rad = diam/2; //Radius = diameter / 2
    area = 3.14159*(rad*rad); //Area = PiR^2
    slices = area/14.125;
    pizzas = slices/(4*numppl);
    cout<<"The amount of pizzas that need to be ordered is "<<pizzas<<" pizzas for "<<numppl<<" people."<<endl;
    return 0;
}


