 
/* 
 * File:   main.cpp
 * Author: Mohammad Mohammad
 *
 * Created on Febuary 4, 2018, 11:53 PM
 * Purpose: Calculate yearly rainfall
 */

//System Libraries
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int SIZE=11;
    float small,large,total;
    float values[SIZE];
    small=values[0];
    large=values[0];
    total=values[0];
    cout<<"This program will calculate the amount of rainfall for 12 months."<<endl;
    cout<<"Enter 12 numbers representing each month of rainfall."<<endl;
    cin>>values[0];
    cin>>values[1];
    cin>>values[2];
    cin>>values[3];
    cin>>values[4];
    cin>>values[5];
    cin>>values[6];
    cin>>values[7];
    cin>>values[8];
    cin>>values[9];
    cin>>values[10];
    cin>>values[11];
    for(int i=0;i<12;i++){
        if (values[i] < small){
        small = values[i];
        }else if (values[i] > large){
        large = values[i];
        total=total+values[i];
        }
    }
    cout<<"The smallest number in the set is "<<small<<endl;
    cout<<"The largest number in the set is "<<large<<endl;
    cout<<"The total amount of rainfall is "<<total<<endl;
    return 0;
}


 