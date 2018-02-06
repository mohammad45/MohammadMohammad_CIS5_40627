/* 
 * File:   main.cpp
 * Author: Mohammad Mohammad
 * Created on Febuary 05, 2018, 1:24 PM
 * Purpose:  Check to see if you won the lottery
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
bool result(int);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int number;
    bool valid;
    //Input or initialize values Here
    cout<<"Enter your 5 digit Lottery number."<<endl;
    cin>>number;
    valid=result(number);
    //Process/Calculations Here
    
    //Output Located Here
    if(valid==true){
    cout<<"You have a winning number."<<endl;
    }else{
        cout<<"You failed to win the lottery yet again."<<endl;
    }
    //Exit
    return 0;
}
bool result(int input){
    int verify[] = {13579,26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};
    bool output;
    for(int i=0;i<=9;i++){
        if(input==verify[i]){
            output=true;
            break;
        }else{
            output=false;
        }
    }
    return output;
}

