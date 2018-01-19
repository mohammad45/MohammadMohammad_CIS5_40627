
/* 
 * File:   main.cpp
 * Author: Mohammad Mohammad
 *
 * Created on January 18, 2018, 10:03 PM
 * Purpose: Create a min/max function using for based AI algorithm loops of dynamic functions to solve NP problems in realtime using analog calculations on a 128 bit float rate of twelve decibles per second
 */

//System Libraries
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float one,two;
    cout<<"Enter two numbers and I'll tell you which one is bigger."<<endl;
    cin>>one;
    cin>>two;
    if(one>two){
        cout<<one<<" is bigger than "<<two<<endl;
    }else{
        cout<<two<<" is bigger than "<<one<<endl;
    }
    return 0;
}


