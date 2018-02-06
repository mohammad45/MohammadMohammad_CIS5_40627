 
/* 
 * File:   main.cpp
 * Author: Mohammad Mohammad
 *
 * Created on Febuary 4, 2018, 11:26 PM
 * Purpose: Use an array to calculate the largest and smallest input values
 */

//System Libraries
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    const int SIZE=9;
    int small,large;
    int values[SIZE];
    small=values[0];
    large=values[0];
    cout<<"This program will calculate the largest and smallest values from 10 inputs you enter."<<endl;
    cout<<"Enter 10 numbers."<<endl;
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
    for(int i=0;i<=9;i++){
        if (values[i] < small){
        small = values[i];
        }else if (values[i] > large){
        large = values[i];
        }
    }
    cout<<"The smallest number in the set is "<<small<<endl;
    cout<<"The largest number in the set is "<<large<<endl;
    return 0;
}


 