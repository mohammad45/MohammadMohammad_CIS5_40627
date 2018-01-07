
/* 
 * File:   main.cpp
 * Author: Mohammad Mohammad
 *
 * Created on January 7, 2018, 4:51 AM
 * Purpose: To calculate the profits of an electronics company
 */

//System Libraries
#include <iostream>
//Declare global constants here only
using namespace std;

/*
 * Start functions here
 */
int main(int argc, char** argv) {
    //Declare variables here
    float price, profit, total;
    
    //Intitalize variables here]
    price = 14.95;
    profit = .35;
    
    //Calculate variables
    total = (price * profit) + price;
    
    //Return output
    cout<<"This is a program designed to calculate the cost of a"<<endl;
    cout<<"circuit board that costs $14.95 plus a 35 percent profit margin."<<endl;
    cout<<"The total cost would be $"<<total<<endl;
    return 0;
}


