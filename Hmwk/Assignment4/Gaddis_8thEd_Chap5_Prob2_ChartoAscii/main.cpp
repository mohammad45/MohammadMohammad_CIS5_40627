/* 
 * File:   main.cpp
 * Author: Mohammad Mohammad
 * Created on January 30, 2018, 1:08 PM
 * Purpose:  Print out all characters in ASCII to Characters.
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
    char abc;
    
    //Input or initialize values Here
    for(int i=0, ii=1;i<=127;i++,ii++){
        abc=i;
        if (ii<=16){
            cout<<abc<<" "<<i<<endl;
        }else{
            cout<<endl;
            ii=1;
        }
    }
    //Process/Calculations Here
    
    //Output Located Here

    //Exit
    return 0;
}

