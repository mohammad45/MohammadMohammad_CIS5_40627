
/* 
 * File:   main.cpp
 * Author: Mohammad Mohammad
 *
 * Created on January 6, 2018, 11:00 PM
 * Purpose: Create a diamond pattern
 */

//System Libraries
#include <iostream>
#include <cstdlib> //Random number generator
#include <ctime>
#include <iomanip>
#include <cmath>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Set the random number seed
                srand(static_cast<unsigned int>(time(0)));
                //Declare all Variables Here
                unsigned short op1,op2,result,answer;
    
                //Input or initialize values Here
                op1=rand()%900+100; //Three digit number
                op2=rand()%1000; //Any 1 to 3 digit number

                //Process/Calculations Here
                result=op1+op2;
                //Output Located Here
                cout<<"Test your addition skills, Solve the following problem "<<endl;
                cout<<setw(5)<<op1<<endl;
                cout<<"+ "<<setw(3)<<op2<<endl;
                cout<<"------"<<endl<<(result>1000?" ":"  ");
                cin>>answer;
                cout<<(result==answer?"Correct":"Incorrect")<<endl;
                //Exit
    return 0;
}


