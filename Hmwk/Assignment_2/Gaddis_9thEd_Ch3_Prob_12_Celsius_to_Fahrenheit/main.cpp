/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float degf, degc, dgchk, x1,x2,y1,y2;
    //Input or initialize values Here
    x1=32; //32 degrees fahrenhiet
    x2=212; //212 degrees fahrenhieht
    y1=0; //sub-zero celcius
    y2=100; //100 degrees celcius
    
    //Input the temperature to convert
    cout<<"Input the temperature in degrees Fahrenheit"<<endl;
    cout<<"to convert to degrees Celsius"<<endl;
    cin>>degf;
    //Process/Calculations Here
    degc=(degf-32)*5/9;
    dgchk = y1+(y2-y1)*(degf-x1)/(x2-x1);
    
    //Output Located Here
    cout<<degf<<" degrees Fahrenheit = "<<dgchk<<" degrees Celsius = "<<degc<<" degrees Celsius"<<endl;

    //Exit
    return 0;
}

