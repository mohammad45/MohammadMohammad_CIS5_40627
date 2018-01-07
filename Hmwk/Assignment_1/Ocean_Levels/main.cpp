
/* 
 * File:   main.cpp
 * Author: Mohammad Mohammad
 *
 * Created on January 7, 2018, 5:36 AM
 * Purpose: Create a diamond pattern
 */

//System Libraries
#include <iostream>
//Declare global constants here
float RISING = 1.5;
using namespace std;

/*
 * Create functions here
 */
int main(int argc, char** argv) {
    //Declare variables here
    float year5,year7,year10; //Here we declare 3 variables that represent the time passed in years
    
    //Initialize/Process variables here
    year5 = RISING * 5; //This is a simple formula of Rate * Time, with rate being 1.5 millimeters, and time being years
    year7 = RISING * 7;
    year10 = RISING * 10;
    cout<<"This program was designed to calculate the amount of millimeters the ocean"<<endl;
    cout<<"rises at each year. Since it rises at 1.5 millimeters yearly, we will calculate"<<endl;
    cout<<"how high it rises over a set of years."<<endl;
    cout<<"In five years, the ocean would have risen over "<<year5<<" millimeters."<<endl;
    cout<<"In seven years, the ocean would have risen over "<<year7<<" millimeters."<<endl;
    cout<<"In over ten years, the ocean would have risen over "<<year10<<" millimeters."<<endl;
    return 0;
}


