
/* 
 * File:   main.cpp
 * Author: Mohammad Mohammad
 *
 * Created on January 18, 2018, 10:03 PM
 * Purpose: Create a BMI calculator
 * */

//System Libraries
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float one,two,BMI;
    cout<<"This program will calculate your BMI. Enter Your Weight:"<<endl;
    cin>>one;
    cout<<"Now enter your height. (In inches)"<<endl;
    cin>>two;
    BMI=(one*703)/(two*two);
    if(BMI>=25){
        cout<<"Your BMI ("<<BMI<<") exceeds normal levels, making you overweight."<<endl;
    }else if(BMI<=18.5){
        cout<<"Your BMI("<<BMI<<") is significantly lower than normal, making you underweight."<<endl;
    } else {
        cout<<"You have an optimal BMI of "<<BMI<<endl;
    }
    return 0;
}


