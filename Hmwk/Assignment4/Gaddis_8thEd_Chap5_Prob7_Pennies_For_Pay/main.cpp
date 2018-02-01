/* 
 * File:   main.cpp
 * Author: Mohammad Mohammad
 * Created on January 31, 2018, 1:35 PM
 * Purpose:  Calculate a penny exponentially growing in value
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
    float pennies,total,time;
    //Input or initialize values Here
    cout<<"This program will take the amount of pennies you earn per day"<<endl;
    cout<<"and double each day for the amount of days you enter, then re"<<endl;
    cout<<"-turn the amount in dollar amounts. Enter the amount you earn"<<endl;
    cout<<"in pennies."<<endl;
    cin>>pennies;
    cout<<"Now enter the amount of days in which you worked."<<endl;
    cin>>time;
    if(pennies<1||time<1){
        cout<<"You have entered a number below one. The program will now self-destruct."<<endl;
        return 1;
    }else{
        cout<<"Amount earned           Day"<<endl;
        for(int i=1;i<=time;i++){
        pennies=pennies*2;
        cout<<" $"<<pennies/100<<"            "<<i<<endl;
        }
    }
    //Process/Calculations Here
    
    //Output Located Here
    cout<<"Hello World"<<endl;

    //Exit
    return 0;
}

