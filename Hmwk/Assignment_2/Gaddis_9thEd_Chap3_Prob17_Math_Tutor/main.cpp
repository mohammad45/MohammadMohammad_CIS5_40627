
/* 
 * File:   main.cpp
 * Author: Mohammad Mohammad
 *
 * Created on January 6, 2018, 12:10 AM
 * Purpose: Create an math tutoring program
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
const int MIN = 1;
const int MAX = 999;

/*
 * 
 */
int main(int argc, char** argv) {
    int rand1,rand2,answer;
    unsigned seed = time(0);
    srand(seed);
    rand1 = (rand() % (MAX - MIN + 1)) + MIN;
    rand2 = (rand() % (MAX - MIN + 1)) + MIN;
    answer = rand1+rand2;
    cout<<"This program generates two numbers for you to solve. When you are ready "<<endl;
    cout<<"to see the answer, press any key to continue."<<endl;
    cout<<" "<<rand1<<endl;
    cout<<"+"<<rand2<<endl;
    cin.get();
    cout<<" "<<answer<<endl;
    cout<<"Please restart the program to generate two new numbers to solve"<<endl;
    return 0;
}


