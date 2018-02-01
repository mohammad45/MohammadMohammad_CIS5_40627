/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
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
    float calories;
    //Input or initialize values Here
    cout<<"This program will calculate how many calories you burn in 6 intervals of 5 minutes."<<endl;
    cout<<"You burn 3.6 calories per minute so "<<endl;
    //Process/Calculations Here
    for(int i=0;i<=30;i++){
        calories=3.6*i;
        if(i==5){
        cout<<"After 5 minutes: "<<calories<<" burned."<<endl;
        }else if(i==10){
            cout<<"After 10 minutes: "<<calories<<" burned."<<endl;
        }else if(i==15){
            cout<<"After 15 minutes: "<<calories<<" burned."<<endl;
        }else if(i==20){
            cout<<"After 20 minutes: "<<calories<<" burned."<<endl;
        }else if(i==25){
            cout<<"After 25 minutes: "<<calories<<" burned."<<endl;
        }
        else if(i==30){
            cout<<"After 30 minutes: "<<calories<<" burned."<<endl;
        }
    }
    //Output Located Here
    //Exit
    return 0;
}

