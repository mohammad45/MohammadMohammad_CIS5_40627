 
/* 
 * File:   main.cpp
 * Author: Mohammad Mohammad
 *
 * Created on Febuary 4, 2018, 10:58 PM
 * Purpose: Calculate the Markup retail price of a product using functions
 */

//System Libraries
#include <iostream>

using namespace std;

/*
 * 
 */
float markup(float,float);
int main(int argc, char** argv) {
    float whole,mark,retail;
    cout<<"This program calculates the Retail price of a product."<<endl;
    cout<<"Enter the wholesale price of the product."<<endl;
    cin>>whole;
    cout<<"Now enter the markup percentage of the product."<<endl;
    cin>>mark;
    retail=markup(whole,mark);
    cout<<"The retail price of the item sold is $"<<retail<<" dollars."<<endl;
    return 0;
}
float markup(float a,float b){
    float c;
    if (a>0||b>0){
    c=a+(a*(b/100));
    return c;
    }else{
        cout<<"No numbers below 0 are valid."<<endl;
        return 1;
    }
}


 