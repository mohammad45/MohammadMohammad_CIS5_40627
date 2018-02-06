/* 
 * File:   main.cpp
 * Author: Mohammad Mohammad
 * Created on Febuary 05, 2018, 1:40 PM
 * Purpose:  Compare linear to binary search methods.
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
int result1(int);
int result2(int);
int result3(int);
//Program Execution Begins Here
int main(int argc, char** argv) {
    srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables Here
    int number;
    bool valid,valid2,valid3;
    //Input or initialize values Here
    number=rand()%20;
    valid=result1(number);
    valid2=result2(number);
    valid3=result3(number);
    //Process/Calculations Here
    
    //Output Located Here
    cout<<"Linear search found the result in "<<valid<<" searches, while"<<endl;
    cout<<"Binary search found the result in "<<valid2<<" searches. And"<<endl;
    cout<<"Random search found the result in "<<valid3<<" searches."<<endl;
    //Exit
    return 0;
}
int result1(int input){
    int verify[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int output;
    output=0;
    for(int i=0;i<=19;i++){
        if(input==verify[i]){
            output=i;
            break;
        }else{
          output=output+1;  
        }
    }
    return output;
}
int result2(int input){
int verify[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int output;
    output=0;
    for(int i=0;i<=9;i++){
        if(input==verify[i]){
            return output;
            break;
        }
          output=output+1;  
        }
    for(int i=10;i<=19;i++){
        if(input==verify[i]){
            return output;
            break;
        }
        output=output+1;
    }
    return output;
}

int result3(int input){
    int verify[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int output;
    output=0;
    int random;
    for(int i=0;i<=19;i++){
        random=rand()%20;
        if(input==verify[random]){
            output=i;
            break;
        }else{
          output=output+1;  
        }
    }
    return output;
}