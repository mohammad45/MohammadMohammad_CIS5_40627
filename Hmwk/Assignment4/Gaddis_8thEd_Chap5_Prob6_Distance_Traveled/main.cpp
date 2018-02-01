/* 
 * File:   main.cpp
 * Author: Mohammad Mohammad
 * Created on January 31, 2018, 1:26 PM
 * Purpose:  Sum of numbers
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
    float total,var1,var2;
    //Input or initialize values Here
    cout<<"Enter two positive numbers, and this will output the sum of all numbers."<<endl;
    cin>>var2;
    cout<<"Enter the second number."<<endl;
    cin>>var1;
    total=var1;
    if(var1<1||var2<1){
        cout<<"Error. YOU CANNOT ENTER A NUMBER BELOW ONE."<<endl;
        return 1;
    }else{
        //cout<<"Hour     Distance Traveled"<<endl;
        //cout<<"--------------------------"<<endl;
        for(int i=var1;i<=var2;i++){
            float temp;
            temp=total;
            total=temp+i;
        }
        cout<<"The sum from "<<var1<<" to "<<var2<<" = "<<total<<endl;
    }
    //Process/Calculations Here
    
    //Output Located Here

    //Exit
    return 0;
}

