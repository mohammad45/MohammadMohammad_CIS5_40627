/* 
 * File:   main.cpp
 * Author: Mohammad Mohammad
 * Created on Febuary 05, 2018, 12:56 PM
 * Purpose:  Verify a account validation.
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
    cout<<"Enter a valid charge account number."<<endl;
    cin>>number;
    valid=result(number);
    //Process/Calculations Here
    
    //Output Located Here
    if(valid==true){
    cout<<"Your input was verified and correct."<<endl;
    }else{
        cout<<"Your input was found to be incorrect."<<endl;
    }
    //Exit
    return 0;
}
bool result(int input){
    int verify[] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 8080152, 4562555, 5552012, 5050552, 7825877, 1250255, 1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
    bool output;
    for(int i=0;i<=15;i++){
        if(input==verify[i]){
            output=true;
            break;
        }else{
            output=false;
        }
    }
    return output;
}

