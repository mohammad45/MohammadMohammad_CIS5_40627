/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 17, 2018, 12:42 PM
 * Purpose:  Create a wifi diagnostic troubleshoot
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
    string answer;
    //Input or initialize values Here
    cout<<"Hello! It seems you're having some problems with your router, Yes or No?"<<endl;
            cin>>answer;
    if (answer[0]=='Y'||answer[0]=='y'){
        cout<<"Okay then! Lets begin the troubleshoot diagnostics"<<endl;
    }else if(answer[0]=='N'||answer[0]=='n'){
        cout<<"It seems you have no problems with your wifi, the application will now close."<<endl;
        return 0;
    }
            
    cout<<"Start by rebooting the computer and try to connect. Did that work? (Enter Yes or No only)"<<endl;
            cin>>answer;
    if (answer[0]=='N'||answer[0]=='n'){
        cout<<"Then it seems to be a problem with the router."<<endl;
    }else if(answer[0]=='Y'||answer[0]=='y'){
        cout<<"It seems you're problem has been solved, the application will now close."<<endl;
        return 0;
    }
            
    cout<<"Try to reboot the router instead and now try to connect. Did that work? (Enter Yes or No only)"<<endl;
            cin>>answer;
    if (answer[0]=='N'||answer[0]=='n'){
        cout<<"Check to see if the cables between the router and modem and connected properly."<<endl;
    }else if(answer[0]=='Y'||answer[0]=='y'){
        cout<<"It seems you're problem has been solved, the application will now close."<<endl;
        return 0;
    }
            
    cout<<"After checking to see if your cables are connected, try reconnecting. did that work? (Enter Yes or No only)"<<endl;
    cin>>answer;
    if (answer[0]=='N'||answer[0]=='n'){
        cout<<"You may have interference problems with your router then."<<endl;
    }else if(answer[0]=='Y'||answer[0]=='y'){
        cout<<"It seems you're problem has been solved, the application will now close."<<endl;
        return 0;
    }
    
    cout<<"Move the router to a different location and try to reconnect. Did that work? (Enter Yes or No only)"<<endl;
            cin>>answer;
    if (answer[0]=='N'||answer[0]=='n'){
        cout<<"It appears your router is either malfunctioning or obsolete. You should purchase a new router instead."<<endl;
        return 0;
    }else if(answer[0]=='Y'||answer[0]=='y'){
        cout<<"It seems you're problem has been solved, the application will now close."<<endl;
        return 0;
    }
    //Process/Calculations Here
    
    //Output Located Here
    cout<<"Error: incorrect answer"<<endl;

    //Exit
    return 0;
}

