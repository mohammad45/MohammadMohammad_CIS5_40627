/* 
 * File:   main.cpp
 * Author: Mohammad Mohammad
 * Created on January 3rd, 2018, 12:35 AM
 * Purpose:  Solve the amount of gallons need to paint a fence twice
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
    unsigned short htfence, ltfence, ptCover, nGallns;
    //Input or initialize values Here
    ltfence=6;
    htfence=10;
    ptCover=340;
    //Process/Calculations Here
    nGallns=2*600/ptCover; //since shorts remove the decimal, we round up one
    //Output Located Here
            cout<<"Height of the fence = "<<ltfence<<endl;
            cout<<"Length of the fence = "<<htfence<<endl;
            cout<<"Number of Gallons to cover 1 side "
            <<"of fence twice = "<<nGallns+1<<endl;

    //Exit
    return 0;
}

