/* 
 * File:   main.cpp
 * Author: Mohammad Mohammad
 * Created on January 30, 2018, 1:15 PM
 * Purpose:  Calculate ocean levels rising per year
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
    float rising, oceanlvl; 
    rising = 1.5; //Rate at which the ocean levels rise per year.
    oceanlvl=0;
    //Input or initialize values Here
    cout<<"this program will output the ocean's level rising per year for the next 25 years."<<endl;
    cout<<"Ocean Level    Year"<<endl;
    for(int i=1;i<=25;i++){
        oceanlvl=1.5*i;
    cout<<oceanlvl<<"              "<<i<<endl;
    }
    //Process/Calculations Here
    
    //Output Located Here
    cout<<"Hello World"<<endl;

    //Exit
    return 0;
}

