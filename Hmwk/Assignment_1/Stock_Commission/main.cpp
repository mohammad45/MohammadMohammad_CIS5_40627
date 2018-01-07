
/* 
 * File:   main.cpp
 * Author: Mohammad Mohammad
 *
 * Created on January 7, 2018, 4:30 AM
 * Purpose: To calculate the costs of buying a stock
 */

//System Libraries
#include <iostream>
//Declare global constants here ONLY
using namespace std;

/*
 * Prepare main function here
 */
int main(int argc, char** argv) {
    //Declare variables here
    float stocks, price, comssn, total, total2, totcost; //Declaring 6 variables to find the cost
    
    //Initalize variables here
    stocks = 750; //The amount of shares purchased
    price = 35;  //The price of each share
    comssn = 0.02; //The percent the broker commissions
    
    //Process calculations here
    total = stocks * price; //The total cost without commission
    total2 = total * comssn; //The commission cost
    totcost = total + total2; //The final cost with all fees added together
    cout<<"This is a program designed to evaluate Mrs. Kathyrn's"<<endl;
    cout<<"total fees upon buying 750 shares of stock at $35 each."<<endl;
    cout<<"Commission withheld, the total cost of the stocks was $"<<total<<".00 "<<endl;
    cout<<"The commission itself came out to $"<<total2<<".00 in total."<<endl;
    cout<<"And finally, the total price of the transaction was $"<<totcost<<".00 "<<endl;
    return 0;
}


