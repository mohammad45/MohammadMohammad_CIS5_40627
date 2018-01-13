
/* 
 * File:   main.cpp
 * Author: Mohammad Mohammad
 *
 * Created on January 13, 2018, 12:44 AM
 * Purpose: Calculate the property taxes
 */

//System Libraries
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float propval, assesval, taxamt; //propval is the Property tax,assesval is the Assessment value, taxamt is the total tax amount
    cout<<"This program will help calculate your property taxes."<<endl;
    cout<<"Please enter the value of your property."<<endl;
    cin>>propval;
    assesval = propval*.6;
    taxamt = .75*(assesval/100);
    cout<<"Property Value: $"<<propval<<endl;
    cout<<"Assessment value: $"<<assesval<<endl;
    cout<<"Tax amount: $"<<taxamt<<endl;
    return 0;
}


