
/* 
 * File:   main.cpp
 * Author: Mohammad Mohammad
 *
 * Created on January 6, 2018, 9:44 PM
 * Purpose: Calculate the amount of people drinking energy drinks
 */

//System Libraries
#include <iostream>
//Declare Global Constants only
using namespace std;

/*
 * Main function
 */
int main(int argc, char** argv) {
    //Declare variables
    float consum, eng_drk, citrus, prcnt1, prcnt2;
    //initalize the variables
    consum = 16000; //declare how many consumers there are
    prcnt1 = .15; //Declare what percent drink energy drinks per week
    prcnt2 = .58; //Declare what percent of those that drink energy drinks prefer citrus
    
    //Process calculations here
    eng_drk = consum * prcnt1;
    citrus = eng_drk * prcnt2;
    
    //Output results here
    cout<<"This program was designed to evaluate statistics"<<endl;
    cout<<"regarding how many people drink energy drinks, and"<<endl;
    cout<<"of those, how many prefer the citrus flavor. In this"<<endl;
    cout<<"program, out of 16,000 consumers, 15 percent of them"<<endl;
    cout<<"consume the product on a weekly basis. That is "<<eng_drk<<" people"<<endl;
    cout<<"And out of those "<<eng_drk<<" people, 58 percent of them"<<endl;
    cout<<"preferred to drink the citrus flavored brand. That is over"<<endl;
    cout<<citrus<<" people. Those are the results of this program."<<endl;
    return 0;
}


