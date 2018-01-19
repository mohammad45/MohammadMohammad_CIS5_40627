/* 
 * File:   main.cpp
 * Author: Mohammad Mohammad
 * Created on January 17, 2018, 1:23 PM
 * Purpose:  Color Mixer
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
    bool red,blue,green;
    string answer;
    //Input or initialize values Here
    cout<<"This program will mix two colors together to create a third color."<<endl;
    cout<<"Type either Red, Blue or Yellow."<<endl;
    cin>>answer;
    if (answer[0]=='R'||answer[0]=='r'){
        red=true;
    }else if (answer[0]=='Bl'||answer[0]=='b'){
        blue=true;
    }else if (answer[0]=='Y'||answer[0]=='y'){
        green=true;
    }
    cout<<"Now enter a second color (Red, Blue or Yellow only)."<<endl;
    cin>>answer;
    if (answer[0]=='R'||answer[0]=='r'){
        red=true;
    }else if (answer[0]=='Bl'||answer[0]=='b'){
        blue=true;
    }else if (answer[0]=='Y'||answer[0]=='y'){
        green=true;
    }
    if(red==blue==true){
        cout<<"When you mix red and blue, you get purple."<<endl;
    }else if(red==green==true){
        cout<<"When you mix red and yellow, you get orange."<<endl;
    }else if(green==blue==true){
        cout<<"When you mix yellow and blue, you get green."<<endl;
    }
    //Process/Calculations Here
    
    //Output Located Here
    cout<<"The program will now close."<<endl;

    //Exit
    return 0;
}

