
/* 
 * File:   main.cpp
 * Author: Mohammad Mohammad
 *
 * Created on January 18, 2018, 10:03 PM
 * Purpose: Create a BMI calculator
 * */

//System Libraries
#include <iostream>
#include <cstdlib> //Random number generator
#include <ctime>
#include <iomanip>
#include <cmath>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
                float aproxE, term, x;
                int counter;
                //Initialize Variables
                aproxE=1.0f;
                counter=1;
                x=1.0f;
                term=x/counter++;
                //Process/Map inputs to outputs
                aproxE+=term;
                cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
                term*=x/counter++; 

                aproxE+=term;
                cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
                term*=x/counter++; 

                aproxE+=term;
                cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
                term*=x/counter++; 

                aproxE+=term;
                cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
                term*=x/counter++; 

                aproxE+=term;
                cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
                term*=x/counter++; 

                aproxE+=term;
                cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
                term*=x/counter++; 

                aproxE+=term;
                cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
                term*=x/counter++; 

                aproxE+=term;
                cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
                term*=x/counter++; 
                //Output data
                cout<<"e^"<<x<<"       exactly = "<<exp(x)<<endl;
                //Exit stage right!
    return 0;
}


