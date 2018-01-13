
/* 
 * File:   main.cpp
 * Author: Mohammad Mohammad
 *
 * Created on January 13, 2018, 12:26 AM
 * Purpose: To calculate currency exchange rates
 */

//System Libraries
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float dollar,euro,yen;
    cout<<"This program will tell you the exchange rates for the US to Yen and the Euro."<<endl;
    cout<<"Please enter the amount of dollars you wish to exchange."<<endl;
    cin>>dollar;
    yen = 111.05*dollar;
    euro = .82*dollar;
    int trueamt = (euro+0.005)*100; //Half penny rounded up then truncated
    euro=trueamt/100.0f;
    cout<<dollar<<" USD to "<<yen<<" Yen."<<endl;
    cout<<dollar<<" USD to "<<euro<<" Euros."<<endl;
    return 0;
}


