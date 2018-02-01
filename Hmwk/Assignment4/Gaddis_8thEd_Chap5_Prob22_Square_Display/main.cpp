 
/* 
 * File:   main.cpp
 * Author: Mohammad Mohammad
 *
 * Created on January 6, 2018, 11:00 PM
 * Purpose: Create a diamond pattern
 */

//System Libraries
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    cout<<"This program displays a square based on a number from 1 to 15."<<endl;
    cout<<"Enter a number from 1 to 15."<<endl;
    int number,square;
    cin>>number;
    square=1;
    for(int i=1;i<=(number*number);i++){
        
        if(square<=number){
            cout<<'X';
            square+=1;
        }else{
            cout<<endl;
            square=1;
        }
    }
    return 0;
}


