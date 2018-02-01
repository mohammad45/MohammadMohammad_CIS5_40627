/* 
 * File:   main.cpp
 * Author: Mohammad Mohammad
 * Created on January 31, 2018, 1:26 PM
 * Purpose:  Distance Traveled calculator
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
    float distance,time,speed;
    //Input or initialize values Here
    cout<<"What is the speed of the vehicle in mph?"<<endl;
    cin>>speed;
    cout<<"How many hours has it traveled?"<<endl;
    cin>>time;
    if(time<1||speed<1){
        cout<<"Error. YOU CANNOT ENTER A NUMBER BELOW ONE."<<endl;
        return 1;
    }else{
        cout<<"Hour     Distance Traveled"<<endl;
        cout<<"--------------------------"<<endl;
        for(int i=1;i<=time;i++){
            cout<<"  "<<i<<"             "<<i*speed<<endl;
        }
    }
    //Process/Calculations Here
    
    //Output Located Here

    //Exit
    return 0;
}

