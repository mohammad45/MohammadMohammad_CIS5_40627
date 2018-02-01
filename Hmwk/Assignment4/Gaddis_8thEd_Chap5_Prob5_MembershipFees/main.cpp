/* 
 * File:   main.cpp
 * Author: Mohammad Mohammad
 * Created on January 30, 2018, 1:37 PM
 * Purpose:  Hello World Template
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
    float membfee;
    membfee=2500;
    //Input or initialize values Here
    cout<<"This program is to calculate the membership fees of a country club"<<endl;
    cout<<"Whose costs will increase each year by 4% for the next 6 years."<<endl;
    
    //Process/Calculations Here
    for(int i=1;i<=6;i++){
        membfee=membfee+(membfee*0.04);
        cout<<"Year "<<i<<": The membership cost is $"<<membfee<<endl;
    }
    //Output Located Here
    
    //Exit
    return 0;
}

