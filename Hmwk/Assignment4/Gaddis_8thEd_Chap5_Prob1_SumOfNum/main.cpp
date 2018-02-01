/* 
 * File:   main.cpp
 * Author: Mohammad Mohammad
 * Created on January 30, 2018, 12:55 PM
 * Purpose:  Sum of numbers using for loop
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
    int size,value;
    //Input or initialize values Here
    cout<<"This program will calculate the sum of all numbers from one to a number you enter."<<endl;
    cout<<"Enter a positive number."<<endl;
    cin>>size;
    value=1;
    for(int i=1;i<=size;i++){
        value=i+value;
    }
    cout<<"From 1 to "<<size<<" The sum of all numbers is "<<value<<endl;
    //Process/Calculations Here
    
    //Output Located Here

    //Exit
    return 0;
}

