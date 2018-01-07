
/* 
 * File:   main.cpp
 * Author: Mohammad Mohammad
 *
 * Created on January 7, 2018, 5:54 AM
 * Purpose: To calculate the sales tax on a purchase
 */

//System Libraries
#include <iostream>
//Declare global constants here
using namespace std;

/*
 * Declare functions here
 */
int main(int argc, char** argv) {
    //Declare variables here
    float price, tax1, tax2, total; //4 variables will represent the price, taxes and total cost
    
    //Initialize variables here
    price = 95; //The cost without tax
    tax1 = 0.04; //The state sales tax
    tax2 = 0.02; //The county sales tax
    
    //Calculate variables here
    total = (price*tax1)+(price*tax2)+price; //We add the sum of the two taxes plus the original price
    cout<<"This program is designed to calculate the costs of a $95 purchase."<<endl;
    cout<<"The state tax is 4% and the county tax is 2%. In total"<<endl;
    cout<<"the final purchase comes out to be $"<<total<<endl;
    return 0;
}


