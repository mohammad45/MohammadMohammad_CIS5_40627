/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 9, 2018, 12:36 PM
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
    int number, negsum, possum, totsum;
    //Input or initialize values Here
    negsum=possum=totsum=0;
    //Process/Calculations Here
    cout<<"this program adds 10 numbers"<<endl;
    cout<<"it determines the negative, positive and total sum."<<endl;
    cout<<"Input 10 numbers one at a time"<<endl;
    cin>>number;
    negsum+=number<0?number:0;
    possum+=number>0?number:0;
    
    cin>>number;
    negsum+=number<0?number:0;
    possum+=number>0?number:0;
    
    cin>>number;
    negsum+=number<0?number:0;
    possum+=number>0?number:0;
    
    cin>>number;
    negsum+=number<0?number:0;
    possum+=number>0?number:0;
    
    cin>>number;
    negsum+=number<0?number:0;
    possum+=number>0?number:0;
    
    cin>>number;
    negsum+=number<0?number:0;
    possum+=number>0?number:0;
    
    cin>>number;
    negsum+=number<0?number:0;
    possum+=number>0?number:0;
    
    cin>>number;
    negsum+=number<0?number:0;
    possum+=number>0?number:0;
    
    cin>>number;
    negsum+=number<0?number:0;
    possum+=number>0?number:0;
    
    cin>>number;
    negsum+=number<0?number:0;
    possum+=number>0?number:0;
    
    totsum = possum+negsum;
    //Output Located Here
    cout<<"The negative sum = "<<negsum<<endl;
    cout<<"The positive sum = "<<possum<<endl;
    cout<<"The total sum = "<<totsum<<endl;
    //Exit
    return 0; 
}

