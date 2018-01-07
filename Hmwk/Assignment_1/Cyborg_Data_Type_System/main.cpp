
/* 
 * File:   main.cpp
 * Author: Mohammad Mohammad
 *
 * Created on January 7, 2018, 5:18 AM
 * Purpose: Determine the size of data types for a cyborg program
 */

//System Libraries
#include <iostream>
//Declare global constants here
using namespace std;

/*
 * Start functions here
 */
int main(int argc, char** argv) {
    cout<<"This is a program designed to determine the size of data types"<<endl;
    cout<<"for the calculations of a cyborg supercomputer. The size of a "<<endl;
    cout<<"character datatype is "<<sizeof(char)<<" byte"<<endl;
    cout<<"And the size of the integer data type is "<<sizeof(int)<<" bytes"<<endl;
    cout<<"The size of a floating-point number data type is "<<sizeof(float)<<" bytes"<<endl;
    cout<<"And the size of a double number is "<<sizeof(double)<<" bytes"<<endl;
    return 0;
}


