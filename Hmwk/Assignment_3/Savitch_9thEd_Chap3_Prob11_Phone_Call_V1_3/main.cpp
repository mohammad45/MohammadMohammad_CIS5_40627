/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned short cost, timesp,hrs,mins, bftime,aftime;
    string day, start;
    //Input or initialize values Here
    cout<<"Calculate cost of phone call"<<endl;
    cout<<"Input the day a phone call was made"<<endl;
    cout<<"Mo Tu We Th Fr Sa Su"<<endl;
    cin>>day;
    cout<<"Input the start time in military hours"<<endl;
    cout<<"1:30 PM = 13:30"<<endl;
    cin>>start;
    cout<<"Input the duration of phone call in minutes (Not exceeding 120 minutes)"<<endl;
    cin>>timesp;
    if(timesp>120)exit(0);
    //Process/Calculations Here
    hrs=(start[0]-48)*10+(start[1]-'0');
    mins=(start[3]-48)*10+(start[4]-'0');
    aftime=mins+timesp-60<=0?0:mins+timesp-60;
    bftime=timesp-aftime;
    if(day[0]=='S'||day[0]=='s'){
        cost=bftime*15;
    }else if(hrs>=8&&hrs<=18){
        cost=bftime*40;
    }else{
        cost=bftime*25;
    }
    //calculate new hours and new day
    hrs+=1;
    hrs=hrs>23?0:hrs;
    if(hrs==0&&day=="Su")day="Mo";
    if(hrs==0&&day=="Fr")day="Sa";
    if(day[0]=='S'||day[0]=='s'){
        cost+=aftime*15;
    }else if(hrs>=8&&hrs<=18){
        cost+=aftime*40;
    }else{
        cost+=aftime*25;
    }
    //Output Located Here
    cout<<"The phone call on "<<day<<" at "<<start
            <<" for "<<mins<<" minutes cost = $"<<cost/100.0f<<endl;
    cout<<"Before = "<<bftime<<endl;
    cout<<"After = "<<aftime<<endl;
    //Exit
    return 0;
}

