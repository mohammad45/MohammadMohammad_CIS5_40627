/* 
 * File:   main.cpp
 * Author: Mohammad Mohammad
 * Created on January 3rd, 2018, 1:20 pM
 * Purpose:  Free Fall
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables 
const int GRAVITY=32; //gravity in ft/sec^2
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned short time, distance;
    //Input or initialize values Here
    cout<<"This program calculates the distance "
            <<"dropped during free-fall"<<endl;
    cout<<"Input the time in free-fall"<<endl;
    cout<<"Time measured in seconds"<<endl;
    cout<<"In the range of 0 to 40 seconds"<<endl;
    cin>>time;
    //Process/Calculations Here
    distance=GRAVITY*time*time/2;
    //Output Located Here
            cout<<"An object dropped for "<<time<<" seconds"
            <<" falls "<<distance<<" feet"<<endl;

    //Exit
    return 0;
}

