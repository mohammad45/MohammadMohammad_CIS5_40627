
/* 
 * File:   main.cpp
 * Author: Mohammad Mohammad
 *
 * Created on January 18, 2018, 1:44 AM
 * Purpose: Calculate the newtons of an object
 */

//System Libraries
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float mass,weight;
    cout<<"This program calculates the weight of an object. (in newtons)"<<endl;
    cout<<"Enter the mass of the object."<<endl;
    cin>>mass;
    weight = mass*9.8;
    cout<<"Your object weighs "<<weight<<" newtons of force."<<endl;
    if (weight>1000){
        cout<<"An object that weight is far too heavy."<<endl;
    }else if (weight<10){
        cout<<"That object is far too light to carry."<<endl;
    }
    return 0;
}


