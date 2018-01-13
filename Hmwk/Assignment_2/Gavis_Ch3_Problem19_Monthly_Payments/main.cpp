/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float payment, rate, npayments,loan;
    
    //Input or initialize values Here
    rate = 0.01;
    npayments = 36;
    loan = 10000;
    
    //Process/Calculations Here
    payment = ( (rate * pow (1 + rate , npayments) ) / (pow( 1 + rate, npayments) - 1) ) * 10000;
    int ipayment = (payment+0.005)*100; //Half penny rounded up then truncated
    payment=ipayment/100.0f;
    //Output Located Here
    cout<<"Loan Amount:          $"<<loan<<endl;
    cout<<"Monthly interest rate: "<<rate*100<<"%"<<endl;
    cout<<"Number of payments:    "<<npayments<<endl;
    cout<<"Monthly Payment =     $"<<payment<<endl;
    cout<<"Amount paid back =    $"<<payment*36<<endl;
    cout<<"Interest paid:        $"<<(payment*36)-10000<<endl;
    //Exit
    return 0;
}