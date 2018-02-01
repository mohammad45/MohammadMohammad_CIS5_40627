/* 
 * File:   main.cpp
 * Author: Mohammad Mohammad
 * Created on January 31, 2018, 1:49 PM
 * Purpose:  Calculate a size of a population
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float days,pop,multi;
    
    //Input or initialize values Here
    cout<<"This program will calculate the size of a population over a period of days."<<endl;
    cout<<"Enter the size of the population."<<endl;
    cin>>pop;
    cout<<"Now enter the multiplier at which they grow."<<endl;
    cin>>multi;
    cout<<"How many days are they left growing for?"<<endl;
    cin>>days;
    if(pop<2||days<1||multi<1){
        cout<<"You entered a number too low to calcuate. Restart the program, and try again."<<endl;
        return 1;
        
    }else{
        cout<<"Day"<<setw(10)<<"Size"<<endl;
        cout<<"-----------------"<<endl;
        for(int i=1;i<=days;i++){
            pop=pop*multi;
            cout<<i<<setw(10)<<pop<<endl;
        }
    }
    //Process/Calculations Here
    
    //Output Located Here

    //Exit
    return 0;
}

