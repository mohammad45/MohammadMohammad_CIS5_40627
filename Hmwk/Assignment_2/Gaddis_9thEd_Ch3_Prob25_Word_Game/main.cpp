/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 10, 2018, 12:35 PM
 * Purpose:  Create a word game for the user to play
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    std::string name,age,city,college,profss,anim,pet;
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    //Output Located Here
    cout<<"This program will create a short story based on"<<endl;
    cout<<"the information you enter."<<endl;
    cout<<"Please enter a name."<<endl;
    std::getline(std::cin,name);
    cout<<"Now enter a age."<<endl;
    std::getline(std::cin,age);
    cout<<"Now enter the name of your city."<<endl;
    std::getline(std::cin,city);
    cout<<"Now enter the name of your college."<<endl;
    std::getline(std::cin,college);
    cout<<"Now enter a profession you would like to do."<<endl;
    std::getline(std::cin,profss);
    cout<<"Now enter the type of pet you have/want."<<endl;
    std::getline(std::cin,anim);
    cout<<"Now enter the name of your pet."<<endl;
    std::getline(std::cin,pet);
    cout<<"Ok! Here is your story:"<<endl;
    cout<<"There once was a person named "<<name<<" who lived in "<<city<<"."<<endl;
    cout<<"At the age of "<<age<<", "<<name<<" went to college at "<<college<<". "<<name<<" graduated and went"<<endl;
    cout<<" to work as a "<<profss<<". Then, "<<name<<" adopted a(n) pet"<<endl;
    cout<<anim<<" named "<<pet<<". They both lived happily ever after."<<endl;
    //Exit
    return 0;
}

