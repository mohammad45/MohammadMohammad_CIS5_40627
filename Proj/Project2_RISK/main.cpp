/* 
 * File:   main.cpp
 * Author: Mohammad Mohammad
 * Created on February 07, 2018, 1:31 PM
 * Purpose:  Make a RISK game.
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <ctime>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void list();
string name(int);
string name2(bool []);
int totarmy(int []);
bool battle(int [],bool [],int [],bool []);
bool ifwon(bool []);
void control(bool []);
int reward(bool []);
int totcard(int []);
void nextto(bool []);
int compai(bool []);
int enemyck(int, bool [], bool [], bool [], bool []);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    srand(time(0));
    char dummy;
    int totcont;
    int totcard;
    int attack;
    int garrisn;
    const int SIZE=41;
    //PLEASE DON'T LOOK AT THIS NASTY CODE I HAD NO CHOICE!
    int countries[SIZE];
    string names[]={"Alaska","Alberta","Central America","Eastern United States","Greenland","Northwest Territory","Ontario","Quebec","Western United States","Argentina","Brazil","Peru","Venezuela","Great Britain","Iceland","Northern Europe","Scandinavia","Southern Europe","Ukraine","Western Europe","Congo","East Africa","Egypt","Madagascar","North Africa","South Africa","Afghanistan","China","India","Irkutsk","Japan","Kamchatka","Middle East","Mongolia","Siam","Siberia","Ural","Yakutsk","Eastern Australia","Indonesia","New Guinea","Western Australia"};
    //OK YOU CAN LOOK BACK NOW!
    int plr1input;
    int plr2input;
    int plr3input;
    int plr4input;
    bool plr1own[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    bool plr2own[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    bool plr3own[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    bool plr4own[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int plr1arm[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int plr2arm[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int plr3arm[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int plr4arm[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int plr1crd[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int plr2crd[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int plr3crd[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int plr4crd[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int plr1tot;
    int plr2tot;
    int plr3tot;
    int plr4tot;
    string country;
    //Input or initialize values Here
    cout<<"Welcome to RISK! You will be playing against 3 other AI players. You are "<<endl;
    cout<<"Player one."<<endl;
    cout<<"Input a number from 1 to 42 to pick your country!"<<endl;
    list();
    cin>>plr1input;
    plr1input=plr1input-1;
    plr1own[plr1input]=true;
    plr1arm[plr1input]=30;
    country=name(plr1input);
    cout<<country<<" is your starting country!"<<endl;
    plr2input=rand()%41;
    while (plr2input==plr1input){
        plr2input=rand()%41;
    }
    country=name(plr2input);
    plr2own[plr2input]=true;
    plr2arm[plr2input]=30;
    cout<<"Player 2 has chosen "<<country<<" as their starting country!"<<endl;
        plr3input=rand()%41;
    while (plr3input==plr1input&&plr3input==plr2input){
        plr3input=rand()%41;
    }
    country=name(plr3input);
    plr3own[plr3input]=true;
    plr3arm[plr3input]=30;
    cout<<"Player 3 has chosen "<<country<<" as their starting country!"<<endl;
        plr4input=rand()%41;
    while (plr4input==plr1input&&plr4input==plr2input&&plr4input==plr3input){
        plr4input=rand()%41;
    }
    country=name(plr4input);
    plr4own[plr4input]=true;
    plr4arm[plr4input]=30;
    cout<<"Player 4 has chosen "<<country<<" as their starting country!"<<endl;
    cout<<endl;
    cout<<"The game has now started. The objective is to conquer all 42 territories from your opponents."<<endl;
    cout<<"You will be rewarded troops based on the number of land masses you control. Refer to"<<endl;
    cout<<"https://upload.wikimedia.org/wikipedia/commons/a/aa/Risk_game_map_fixed.png"<<endl;
    cout<<"for a complete list of all the countries and troops assigned to each country."<<endl;
    cout<<endl;
    //Process/Calculations Here
    for(int i=0;i<=SIZE;i++){
        bool winner;
        winner=ifwon(plr1own);
        if (winner==true){
            cout<<"YOU CONQURED THE WORLD! YOU WIN!"<<endl;
            return 0;
        }else if (winner==false&&i==40){
            i=0;
        }
        totcont=reward(plr1own);
        cout<<"You control "<<totcont<<" territories, so you earn "<<endl;
        cout<<totcont/3<<" soldiers distributed to your controlled areas."<<endl;
        cout<<"You control ";
        control(plr1own);
        for(int i=0;i<=SIZE;i++){
            if(plr1arm[i]>0){
                plr1arm[i]=plr1arm[i]+((totcont/3)/totcont);
            }
        }
        plr1tot=totarmy(plr1arm);
        cout<<"And you have "<<plr1tot<<" total soldiers."<<endl;
        cout<<"Player 2 controls";
        control(plr2own);
        totcont=reward(plr2own);
        for(int i=0;i<=SIZE;i++){
            if(plr2arm[i]>0){
                plr2arm[i]=plr2arm[i]+((totcont/3)/totcont);
            }
        }
        plr2tot=totarmy(plr2arm);
        cout<<"And Player 2 has "<<plr2tot<<" total soldiers."<<endl;
        cout<<"Player 3 controls";
        control(plr3own);
        totcont=reward(plr3own);
        for(int i=0;i<=SIZE;i++){
            if(plr3arm[i]>0){
                plr3arm[i]=plr3arm[i]+((totcont/3)/totcont);
            }
        }
        plr3tot=totarmy(plr3arm);
        cout<<"And Player 3 has "<<plr3tot<<" total soldiers."<<endl;
        cout<<"Player 4 controls";
        control(plr4own);
        totcont=reward(plr2own);
        for(int i=0;i<=SIZE;i++){
            if(plr4arm[i]>0){
                plr4arm[i]=plr4arm[i]+((totcont/3)/totcont);
            }
        }
        plr4tot=totarmy(plr4arm);
        cout<<"And Player 4 has "<<plr4tot<<" total soldiers."<<endl;
        
        cout<<"Type what you will do next. (1 for Attack; 2 for Fortify)"<<endl;
        cin>>plr1input;
        if(plr1input==1){
            cout<<"Type a number to attack these countries next to you."<<endl;
            nextto(plr1own);
            cin>>plr1input;
            cout<<endl;
            cin>>plr1input;
            attack=enemyck(plr1input,plr2own,plr3own,plr4own,plr1own);
            if(attack==0){
                cout<<"Congradulations! You now conquered a new territory! You get a RISK card!"<<endl;
                plr1crd[rand()%41]=1;
                cout<<names[plr1input]<<" is now yours!"<<endl;
                plr1own[plr1input]=true;
                cout<<"How many soldiers do you wish to garrison into "<<names[plr1input]<<"?"<<endl;
                cin>>garrisn;
                if(garrisn<(plr1tot-garrisn)){
                    plr1arm[plr1input]=garrisn;
                    cout<<"Which country that you own do you wish to withdrawl from? (Enter a number.)"<<endl;
                    control(plr1own);
                    cin>>plr1input;
                    plr1arm[plr1input]=plr1arm[plr1input]-garrisn;
                    cout<<"You now have "<<garrisn<<" troops in your conquered area, and"<<endl;
                    cout<<"You have "<<plr1arm[plr1input]<<" troops in "<<plr1own[plr1input]<<endl;
                }
            }else if(attack=1){
                cout<<"You can't do that! You already own that land."<<endl;
            }else if(attack=2){
                int pick;
                cout<<"Player 2 owns that land! You and Player 2 will have to fight to conquer it!"<<endl;
                cout<<"Enter the army you wish to use to fight player two with."<<endl;
                control(plr1own);
                cin>>pick;
                int fight=rand()%6;
                int fight2=rand()%6;
                if(fight>fight2){
                    cout<<"You beat Player 2! He's now down to"<<plr2arm[plr1input]-plr1arm[pick]<<endl;
                    plr2arm[plr1input]=plr2arm[plr1input]-plr1arm[pick];
                    if(plr2arm[plr1input]<1){
                        cout<<"You managed to drive out Player 2! You now own the land!"<<endl;
                        plr1own[plr1input]=true;
                cout<<"How many soldiers do you wish to garrison into "<<names[plr1input]<<"?"<<endl;
                cin>>garrisn;
                if(garrisn<(plr1tot-garrisn)){
                    plr1arm[plr1input]=garrisn;
                    cout<<"Which country that you own do you wish to withdraw from? (Enter a number.)"<<endl;
                    control(plr1own);
                    cin>>plr1input;
                    plr1arm[plr1input]=plr1arm[plr1input]-garrisn;
                    cout<<"You now have "<<garrisn<<" troops in your conquered area, and"<<endl;
                    cout<<"You have "<<plr1arm[plr1input]<<" troops in "<<plr1own[plr1input]<<endl;
                }
                    }
                }else{
                    cout<<"The defender won! You lose "<<plr1arm[pick]-plr2arm[plr1input]<<" troops in "<<names[pick]<<"!"<<endl;
                    plr1arm[pick]=plr1arm[pick]-plr2arm[plr1input];
                    plr1tot=totarmy(plr1arm);
                    if (plr1tot<1){
                        cout<<"You have lost all your territory! You lose the game."<<endl;
                        return 1;
                    }
                }
            }else if(attack=3){
                int pick;
                cout<<"Player 3 owns that land! You and Player 3 will have to fight to conquer it!"<<endl;
                cout<<"Enter the army you wish to use to fight player two with."<<endl;
                control(plr1own);
                cin>>pick;
                int fight=rand()%6;
                int fight2=rand()%6;
                if(fight>fight2){
                    cout<<"You beat Player 3! He's now down to"<<plr3arm[plr1input]-plr1arm[pick]<<endl;
                    plr3arm[plr1input]=plr3arm[plr1input]-plr1arm[pick];
                    if(plr3arm[plr1input]<1){
                        cout<<"You managed to drive out Player 3! You now own the land!"<<endl;
                        plr1own[plr1input]=true;
                cout<<"How many soldiers do you wish to garrison into "<<names[plr1input]<<"?"<<endl;
                cin>>garrisn;
                if(garrisn<(plr1tot-garrisn)){
                    plr1arm[plr1input]=garrisn;
                    cout<<"Which country that you own do you wish to withdraw from? (Enter a number.)"<<endl;
                    control(plr1own);
                    cin>>plr1input;
                    plr1arm[plr1input]=plr1arm[plr1input]-garrisn;
                    cout<<"You now have "<<garrisn<<" troops in your conquered area, and"<<endl;
                    cout<<"You have "<<plr1arm[plr1input]<<" troops in "<<plr1own[plr1input]<<endl;
                }
                    }
                }else{
                    cout<<"The defender won! You lose "<<plr1arm[pick]-plr2arm[plr1input]<<" troops in "<<names[pick]<<"!"<<endl;
                    plr1arm[pick]=plr1arm[pick]-plr2arm[plr1input];
                    plr1tot=totarmy(plr1arm);
                    if (plr1tot<1){
                        cout<<"You have lost all your territory! You lose the game."<<endl;
                        return 1;
                    }
                }
            }else if(attack=4){
                int pick;
                cout<<"Player 4 owns that land! You and Player 4 will have to fight to conquer it!"<<endl;
                cout<<"Enter the army you wish to use to fight player two with."<<endl;
                control(plr1own);
                cin>>pick;
                int fight=rand()%6;
                int fight2=rand()%6;
                if(fight>fight2){
                    cout<<"You beat Player 4! He's now down to"<<plr4arm[plr1input]-plr1arm[pick]<<endl;
                    plr4arm[plr1input]=plr4arm[plr1input]-plr1arm[pick];
                    if(plr4arm[plr1input]<1){
                        cout<<"You managed to drive out Player 4! You now own the land!"<<endl;
                        plr1own[plr1input]=true;
                cout<<"How many soldiers do you wish to garrison into "<<names[plr1input]<<"?"<<endl;
                cin>>garrisn;
                if(garrisn<(plr1tot-garrisn)){
                    plr1arm[plr1input]=garrisn;
                    cout<<"Which country that you own do you wish to withdraw from? (Enter a number.)"<<endl;
                    control(plr1own);
                    cin>>plr1input;
                    plr1arm[plr1input]=plr1arm[plr1input]-garrisn;
                    cout<<"You now have "<<garrisn<<" troops in your conquered area, and"<<endl;
                    cout<<"You have "<<plr1arm[plr1input]<<" troops in "<<plr1own[plr1input]<<endl;
                }
                    }
                }else{
                    cout<<"The defender won! You lose "<<plr1arm[pick]-plr2arm[plr1input]<<" troops in "<<names[pick]<<"!"<<endl;
                    plr1arm[pick]=plr1arm[pick]-plr2arm[plr1input];
                    plr1tot=totarmy(plr1arm);
                    if (plr1tot<1){
                        cout<<"You have lost all your territory! You lose the game."<<endl;
                        return 1;
                    }
                }
            }
        }else{
            cout<<"You skip your turn to gain additional soldiers."<<endl;
        }
        int p2pick;
        plr2input=rand()%p2pick;
        attack=rand()%4;
        if(attack==0){
                cout<<"Player 2 has taken a territory."<<endl;
                plr2crd[rand()%41]=1;
                cout<<names[plr2input]<<" is now Player 2's."<<endl;
                plr2own[plr2input]=true;
                if(garrisn<(plr2tot-garrisn)){
                    plr2arm[plr2input]=garrisn;control(plr2own);
                    plr2arm[plr2input]=plr2arm[plr2input]-garrisn;
                    cout<<"Player 2 now has "<<plr2arm[plr2input]<<" in his new area."<<endl;
                }
            }else if(attack=2){
                cout<<"Player 2 fortifies this round."<<endl;
            }else if(attack=1){
                int pick;
                cout<<"Player 2 is invading! You and Player 2 will have to fight to conquer it!"<<endl;
                cout<<"Enter the army you wish to use to fight player two with."<<endl;
                control(plr1own);
                cin>>pick;
                int fight=rand()%6;
                int fight2=rand()%6;
                if(fight>fight2){
                    cout<<"You beat Player 2! He's now down to"<<plr2arm[plr1input]-plr1arm[pick]<<endl;
                    plr2arm[plr1input]=plr2arm[plr1input]-plr1arm[pick];
                    if(plr2arm[plr1input]<1){
                        cout<<"You managed to drive out Player 2! You now own the land!"<<endl;
                        plr1own[plr1input]=true;
                cout<<"How many soldiers do you wish to garrison into "<<names[plr1input]<<"?"<<endl;
                cin>>garrisn;
                if(garrisn<(plr1tot-garrisn)){
                    plr1arm[plr1input]=garrisn;
                    cout<<"Which country that you own do you wish to withdraw from? (Enter a number.)"<<endl;
                    control(plr1own);
                    cin>>plr1input;
                    plr1arm[plr1input]=plr1arm[plr1input]-garrisn;
                    cout<<"You now have "<<garrisn<<" troops in your conquered area, and"<<endl;
                    cout<<"You have "<<plr1arm[plr1input]<<" troops in "<<plr1own[plr1input]<<endl;
                }
                    }
                }else{
                    cout<<"The defender won! You lose "<<plr1arm[pick]-plr2arm[plr1input]<<" troops in "<<names[pick]<<"!"<<endl;
                    plr1arm[pick]=plr1arm[pick]-plr2arm[plr1input];
                    plr1tot=totarmy(plr1arm);
                    if (plr1tot<1){
                        cout<<"You have lost all your territory! You lose the game."<<endl;
                        return 1;
                    }
                }
            }else if(attack=3){
                int pick;
                cout<<"Player 3 and Player 2 are fighting."<<endl;
                pick=rand()%41;
                int fight=rand()%6;
                int fight2=rand()%6;
                if(fight>fight2){
                    cout<<"Player 2 beat Player 3. Player 3 is now down to"<<plr3arm[plr2input]-plr2arm[pick]<<endl;
                    plr3arm[plr2input]=plr3arm[plr2input]-plr2arm[pick];
                    if(plr3arm[plr2input]<1){
                        cout<<"Player 2 conquered Player 3's land."<<endl;
                        plr2own[plr2input]=true;
                garrisn=rand()%plr2tot;
                if(garrisn<(plr2tot-garrisn)){
                    plr2arm[plr2input]=garrisn;
                    plr2input=rand()%41;
                    plr2arm[plr2input]=plr2arm[plr2input]-garrisn;
                    cout<<"Player 2 now has "<<plr2arm[plr2input]<<" soldiers in his area."<<endl;
                }
                    }
                }else{
                    cout<<"Player 3 beat Player 2. Player 2 lost "<<plr2arm[pick]-plr3arm[plr2input]<<" troops in "<<names[pick]<<"!"<<endl;
                    plr2arm[pick]=plr2arm[pick]-plr3arm[plr2input];
                    plr2tot=totarmy(plr2arm);
                    if (plr2tot<1){
                        cout<<"Player 2 has lost the game."<<endl;
                    }
                }
            }else if(attack=4){
                int pick;
                cout<<"Player 4 and Player 2 are fighting."<<endl;
                pick=rand()%41;
                int fight=rand()%6;
                int fight2=rand()%6;
                if(fight>fight2){
                    cout<<"Player 2 beat Player 4. Player 4 is now down to"<<plr4arm[plr2input]-plr2arm[pick]<<endl;
                    plr4arm[plr2input]=plr4arm[plr2input]-plr2arm[pick];
                    if(plr4arm[plr2input]<1){
                        cout<<"Player 2 conquered Player 4's land."<<endl;
                        plr2own[plr2input]=true;
                garrisn=rand()%plr2tot;
                if(garrisn<(plr2tot-garrisn)){
                    plr2arm[plr2input]=garrisn;
                    plr2input=rand()%41;
                    plr2arm[plr2input]=plr2arm[plr2input]-garrisn;
                    cout<<"Player 2 now has "<<plr2arm[plr2input]<<" soldiers in his area."<<endl;
                }
                    }
                }else{
                    cout<<"Player 4 beat Player 2. Player 2 lost "<<plr2arm[pick]-plr4arm[plr2input]<<" troops in "<<names[pick]<<"!"<<endl;
                    plr2arm[pick]=plr2arm[pick]-plr4arm[plr2input];
                    plr2tot=totarmy(plr2arm);
                    if (plr2tot<1){
                        cout<<"Player 2 has lost the game."<<endl;
                    }
                }
            }
        
    
        cout<<"End of turn."<<endl;
    }
    //Output Located Here
    cout<<"You win!"<<endl;

    //Exit
    return 0;
}
int enemyck(int input, bool player2[], bool player3[], bool player4[],bool player1[]){
    int which;
    if(player1[input==true]){
        which=1;
    }else if(player2[input]==true){
        which=2;
    }else if(player3[input]==true){
        which=3;
    }else if(player4[input]==true){
        which=4;
    }else{
        which=0;
    }
    return which;
}
void nextto(bool input[]){
    string names[]={"Alaska","Alberta","Central America","Eastern United States","Greenland","Northwest Territory","Ontario","Quebec","Western United States","Argentina","Brazil","Peru","Venezuela","Great Britain","Iceland","Northern Europe","Scandinavia","Southern Europe","Ukraine","Western Europe","Congo","East Africa","Egypt","Madagascar","North Africa","South Africa","Afghanistan","China","India","Irkutsk","Japan","Kamchatka","Middle East","Mongolia","Siam","Siberia","Ural","Yakutsk","Eastern Australia","Indonesia","New Guinea","Western Australia"};
    for(int i=0;i<=41;i++){
        if(input[i]==true){
            if(i==0){
                if(input[1]==false){
                    cout<<names[1]<<", ";
                }
                if(input[5]==false){
                    cout<<names[5]<<", ";
                }
            }else if(i==1){
                if(input[0]==false){
                    cout<<names[0]<<", ";
                }
                if(input[5]==false){
                    cout<<names[5]<<", ";
                }
                if(input[6]==false){
                    cout<<names[6]<<", ";
                }
                if(input[8]==false){
                    cout<<names[8]<<", ";
                }
            }else if(i==2){
                if(input[8]==false){
                    cout<<names[8]<<", ";
                }
                if(input[3]==false){
                    cout<<names[3]<<", ";
                }
                if(input[12]==false){
                    cout<<names[12]<<", ";
                }
            }else if(i==3){
                if(input[8]==false){
                    cout<<names[8]<<", ";
                }
                if(input[6]==false){
                    cout<<names[6]<<", ";
                }
                if(input[2]==false){
                    cout<<names[2]<<", ";
                }
                if(input[7]==false){
                    cout<<names[7]<<", ";
                }
            }else if(i==4){
                if(input[5]==false){
                    cout<<names[5]<<", ";
                }
                if(input[6]==false){
                    cout<<names[6]<<", ";
                }
                if(input[14]==false){
                    cout<<names[14]<<", ";
                }
                if(input[7]==false){
                    cout<<names[7]<<", ";
                }
            }else if(i==5){
                if(input[0]==false){
                    cout<<names[0]<<", ";
                }
                if(input[6]==false){
                    cout<<names[6]<<", ";
                }
                if(input[1]==false){
                    cout<<names[1]<<", ";
                }
                if(input[4]==false){
                    cout<<names[4]<<", ";
                }
            }else if(i==6){
                if(input[1]==false){
                    cout<<names[1]<<", ";
                }
                if(input[3]==false){
                    cout<<names[3]<<", ";
                }
                if(input[4]==false){
                    cout<<names[4]<<", ";
                }
                if(input[7]==false){
                    cout<<names[7]<<", ";
                }
                if(input[5]==false){
                    cout<<names[5]<<", ";
                }
            }else if(i==7){
                if(input[4]==false){
                    cout<<names[4]<<", ";
                }
                if(input[6]==false){
                    cout<<names[6]<<", ";
                }
                if(input[3]==false){
                    cout<<names[3]<<", ";
                }
            }else if(i==8){
                if(input[1]==false){
                    cout<<names[1]<<", ";
                }
                if(input[6]==false){
                    cout<<names[6]<<", ";
                }
                if(input[2]==false){
                    cout<<names[2]<<", ";
                }
                if(input[3]==false){
                    cout<<names[3]<<", ";
                }
            }else if(i==9){
                if(input[10]==false){
                    cout<<names[10]<<", ";
                }
                if(input[11]==false){
                    cout<<names[11]<<", ";
                }
            }else if(i==10){
                if(input[11]==false){
                    cout<<names[11]<<", ";
                }
                if(input[9]==false){
                    cout<<names[9]<<", ";
                }
                if(input[12]==false){
                    cout<<names[12]<<", ";
                }
            }else if(i==11){
                if(input[10]==false){
                    cout<<names[10]<<", ";
                }
                if(input[9]==false){
                    cout<<names[9]<<", ";
                }
                if(input[12]==false){
                    cout<<names[12]<<", ";
                }
            }else if(i==12){
                if(input[11]==false){
                    cout<<names[11]<<", ";
                }
                if(input[9]==false){
                    cout<<names[9]<<", ";
                }
                if(input[10]==false){
                    cout<<names[10]<<", ";
                }
                if(input[24]==false){
                    cout<<names[24]<<", ";
                }
            }else if(i==13){
                if(input[14]==false){
                    cout<<names[14]<<", ";
                }
                if(input[15]==false){
                    cout<<names[15]<<", ";
                }
                if(input[16]==false){
                    cout<<names[16]<<", ";
                }
                if(input[19]==false){
                    cout<<names[19]<<", ";
                }
            }else if(i==14){
                if(input[16]==false){
                    cout<<names[16]<<", ";
                }
                if(input[4]==false){
                    cout<<names[4]<<", ";
                }
                if(input[13]==false){
                    cout<<names[13]<<", ";
                }
            }else if(i==15){
                if(input[13]==false){
                    cout<<names[13]<<", ";
                }
                if(input[16]==false){
                    cout<<names[16]<<", ";
                }
                if(input[17]==false){
                    cout<<names[17]<<", ";
                }
                if(input[18]==false){
                    cout<<names[18]<<", ";
                }
                if(input[19]==false){
                    cout<<names[19]<<", ";
                }
            }else if(i==16){
                if(input[18]==false){
                    cout<<names[18]<<", ";
                }
                if(input[15]==false){
                    cout<<names[15]<<", ";
                }
                if(input[14]==false){
                    cout<<names[14]<<", ";
                }
                if(input[13]==false){
                    cout<<names[13]<<", ";
                }
            }else if(i==17){
                if(input[15]==false){
                    cout<<names[15]<<", ";
                }
                if(input[18]==false){
                    cout<<names[18]<<", ";
                }
                if(input[19]==false){
                    cout<<names[19]<<", ";
                }
                if(input[22]==false){
                    cout<<names[22]<<", ";
                }
                if(input[24]==false){
                    cout<<names[24]<<", ";
                }
                if(input[32]==false){
                    cout<<names[32]<<", ";
                }
            }else if(i==18){
                if(input[15]==false){
                    cout<<names[15]<<", ";
                }
                if(input[16]==false){
                    cout<<names[16]<<", ";
                }
                if(input[17]==false){
                    cout<<names[17]<<", ";
                }
                if(input[26]==false){
                    cout<<names[26]<<", ";
                }
                if(input[36]==false){
                    cout<<names[36]<<", ";
                }
                if(input[32]==false){
                    cout<<names[32]<<", ";
                }
            }else if(i==19){
                if(input[15]==false){
                    cout<<names[15]<<", ";
                }
                if(input[17]==false){
                    cout<<names[17]<<", ";
                }
                if(input[13]==false){
                    cout<<names[13]<<", ";
                }
                if(input[24]==false){
                    cout<<names[24]<<", ";
                }
            }else if(i==20){
                if(input[21]==false){
                    cout<<names[15]<<", ";
                }
                if(input[24]==false){
                    cout<<names[17]<<", ";
                }
                if(input[25]==false){
                    cout<<names[13]<<", ";
                }
            }else if(i==21){
                if(input[20]==false){
                    cout<<names[20]<<", ";
                }
                if(input[22]==false){
                    cout<<names[22]<<", ";
                }
                if(input[23]==false){
                    cout<<names[23]<<", ";
                }
                if(input[25]==false){
                    cout<<names[25]<<", ";
                }
                if(input[32]==false){
                    cout<<names[32]<<", ";
                }
            }else if(i==22){
                if(input[21]==false){
                    cout<<names[21]<<", ";
                }
                if(input[24]==false){
                    cout<<names[24]<<", ";
                }
                if(input[13]==false){
                    cout<<names[13]<<", ";
                }
                if(input[32]==false){
                    cout<<names[32]<<", ";
                }
            }else if(i==23){
                if(input[21]==false){
                    cout<<names[21]<<", ";
                }
                if(input[25]==false){
                    cout<<names[25]<<", ";
                }
            }else if(i==24){
                if(input[19]==false){
                    cout<<names[19]<<", ";
                }
                if(input[17]==false){
                    cout<<names[17]<<", ";
                }
                if(input[20]==false){
                    cout<<names[20]<<", ";
                }
                if(input[21]==false){
                    cout<<names[21]<<", ";
                }
                if(input[22]==false){
                    cout<<names[22]<<", ";
                }
                if(input[12]==false){
                    cout<<names[12]<<", ";
                }
                if(input[32]==false){
                    cout<<names[32]<<", ";
                }
            }else if(i==25){
                if(input[21]==false){
                    cout<<names[21]<<", ";
                }
                if(input[20]==false){
                    cout<<names[20]<<", ";
                }
                if(input[23]==false){
                    cout<<names[23]<<", ";
                }
            }else if(i==26){
                if(input[28]==false){
                    cout<<names[28]<<", ";
                }
                if(input[27]==false){
                    cout<<names[27]<<", ";
                }
                if(input[18]==false){
                    cout<<names[18]<<", ";
                }
                if(input[32]==false){
                    cout<<names[32]<<", ";
                }
                if(input[36]==false){
                    cout<<names[36]<<", ";
                }
            }else if(i==27){
                if(input[26]==false){
                    cout<<names[26]<<", ";
                }
                if(input[28]==false){
                    cout<<names[28]<<", ";
                }
                if(input[35]==false){
                    cout<<names[35]<<", ";
                }
                if(input[33]==false){
                    cout<<names[33]<<", ";
                }
                if(input[36]==false){
                    cout<<names[36]<<", ";
                }
                if(input[34]==false){
                    cout<<names[34]<<", ";
                }
            }else if(i==28){
                if(input[26]==false){
                    cout<<names[26]<<", ";
                }
                if(input[27]==false){
                    cout<<names[27]<<", ";
                }
                if(input[32]==false){
                    cout<<names[32]<<", ";
                }
                if(input[34]==false){
                    cout<<names[34]<<", ";
                }
            }else if(i==29){
                if(input[31]==false){
                    cout<<names[31]<<", ";
                }
                if(input[33]==false){
                    cout<<names[33]<<", ";
                }
                if(input[35]==false){
                    cout<<names[35]<<", ";
                }
                if(input[37]==false){
                    cout<<names[37]<<", ";
                }
            }else if(i==30){
                if(input[31]==false){
                    cout<<names[31]<<", ";
                }
                if(input[33]==false){
                    cout<<names[33]<<", ";
                }
            }else if(i==31){
                if(input[29]==false){
                    cout<<names[29]<<", ";
                }
                if(input[30]==false){
                    cout<<names[30]<<", ";
                }
                if(input[33]==false){
                    cout<<names[33]<<", ";
                }
                if(input[37]==false){
                    cout<<names[37]<<", ";
                }
            }else if(i==32){
                if(input[21]==false){
                    cout<<names[21]<<", ";
                }
                if(input[22]==false){
                    cout<<names[22]<<", ";
                }
                if(input[18]==false){
                    cout<<names[18]<<", ";
                }
                if(input[26]==false){
                    cout<<names[26]<<", ";
                }
                if(input[28]==false){
                    cout<<names[28]<<", ";
                }
            }else if(i==33){
                if(input[29]==false){
                    cout<<names[29]<<", ";
                }
                if(input[27]==false){
                    cout<<names[27]<<", ";
                }
                if(input[30]==false){
                    cout<<names[30]<<", ";
                }
                if(input[31]==false){
                    cout<<names[31]<<", ";
                }
            }else if(i==34){
                if(input[28]==false){
                    cout<<names[28]<<", ";
                }
                if(input[27]==false){
                    cout<<names[27]<<", ";
                }
                if(input[39]==false){
                    cout<<names[39]<<", ";
                }
            }else if(i==35){
                if(input[29]==false){
                    cout<<names[29]<<", ";
                }
                if(input[27]==false){
                    cout<<names[27]<<", ";
                }
                if(input[37]==false){
                    cout<<names[37]<<", ";
                }
                if(input[36]==false){
                    cout<<names[36]<<", ";
                }
            }else if(i==36){
                if(input[26]==false){
                    cout<<names[26]<<", ";
                }
                if(input[27]==false){
                    cout<<names[27]<<", ";
                }
                if(input[18]==false){
                    cout<<names[18]<<", ";
                }
                if(input[35]==false){
                    cout<<names[35]<<", ";
                }
            }else if(i==37){
                if(input[29]==false){
                    cout<<names[29]<<", ";
                }
                if(input[31]==false){
                    cout<<names[31]<<", ";
                }
                if(input[35]==false){
                    cout<<names[35]<<", ";
                }
            }else if(i==38){
                if(input[40]==false){
                    cout<<names[40]<<", ";
                }
                if(input[41]==false){
                    cout<<names[41]<<", ";
                }
            }else if(i==39){
                if(input[40]==false){
                    cout<<names[40]<<", ";
                }
                if(input[41]==false){
                    cout<<names[41]<<", ";
                }
                if(input[34]==false){
                    cout<<names[34]<<", ";
                }
            }else if(i==40){
                if(input[39]==false){
                    cout<<names[39]<<", ";
                }
                if(input[41]==false){
                    cout<<names[41]<<", ";
                }
                if(input[38]==false){
                    cout<<names[38]<<", ";
                }
            }else if(i==41){
                if(input[40]==false){
                    cout<<names[40]<<", ";
                }
                if(input[38]==false){
                    cout<<names[38]<<", ";
                }
                if(input[39]==false){
                    cout<<names[39]<<", ";
                }
            }
        }
    }
}
int compai(bool input[]){
    int choose;
    for(int i=0;i<=41;i++){
        if(input[i]==true){
            if(i==0){
                if(input[1]==false){
                    choose=1;
                }
                if(input[5]==false){
                    choose=5;
                }
            }else if(i==1){
                if(input[0]==false){
                    choose=0;
                }
                if(input[5]==false){
                    choose=5;
                }
                if(input[6]==false){
                    choose=6;
                }
                if(input[8]==false){
                    choose=8;
                }
            }else if(i==2){
                if(input[8]==false){
                    choose=8;
                }
                if(input[3]==false){
                    choose=3;
                }
                if(input[12]==false){
                    choose=12;
                }
            }else if(i==3){
                if(input[8]==false){
                    choose=8;
                }
                if(input[6]==false){
                    choose=6;
                }
                if(input[2]==false){
                    choose=2;
                }
                if(input[7]==false){
                    choose=7;
                }
            }else if(i==4){
                if(input[5]==false){
                    choose=5;
                }
                if(input[6]==false){
                    choose=6;
                }
                if(input[14]==false){
                    choose=14;
                }
                if(input[7]==false){
                    choose=7;
                }
            }else if(i==5){
                if(input[0]==false){
                    choose=0;
                }
                if(input[6]==false){
                    choose=6;
                }
                if(input[1]==false){
                    choose=1;
                }
                if(input[4]==false){
                    choose=4;
                }
            }else if(i==6){
                if(input[1]==false){
                    choose=1;
                }
                if(input[3]==false){
                    choose=3;
                }
                if(input[4]==false){
                    choose=4;
                }
                if(input[7]==false){
                    choose=7;
                }
                if(input[5]==false){
                    choose=5;
                }
            }else if(i==7){
                if(input[4]==false){
                    choose=4;
                }
                if(input[6]==false){
                    choose=6;
                }
                if(input[3]==false){
                    choose=3;
                }
            }else if(i==8){
                if(input[1]==false){
                    choose=1;
                }
                if(input[6]==false){
                    choose=6;
                }
                if(input[2]==false){
                    choose=2;
                }
                if(input[3]==false){
                    choose=3;
                }
            }else if(i==9){
                if(input[10]==false){
                    choose=10;
                }
                if(input[11]==false){
                    choose=11;
                }
            }else if(i==10){
                if(input[11]==false){
                    choose=11;
                }
                if(input[9]==false){
                    choose=9;
                }
                if(input[12]==false){
                    choose=12;
                }
            }else if(i==11){
                if(input[10]==false){
                    choose=10;
                }
                if(input[9]==false){
                    choose=9;
                }
                if(input[12]==false){
                    choose=12;
                }
            }else if(i==12){
                if(input[11]==false){
                    choose=11;
                }
                if(input[9]==false){
                    choose=9;
                }
                if(input[10]==false){
                    choose=10;
                }
                if(input[24]==false){
                    choose=24;
                }
            }else if(i==13){
                if(input[14]==false){
                    choose=14;
                }
                if(input[15]==false){
                    choose=15;
                }
                if(input[16]==false){
                    choose=16;
                }
                if(input[19]==false){
                    choose=19;
                }
            }else if(i==14){
                if(input[16]==false){
                    choose=16;
                }
                if(input[4]==false){
                    choose=4;
                }
                if(input[13]==false){
                    choose=13;
                }
            }else if(i==15){
                if(input[13]==false){
                    choose=13;
                }
                if(input[16]==false){
                    choose=16;
                }
                if(input[17]==false){
                    choose=17;
                }
                if(input[18]==false){
                    choose=18;
                }
                if(input[19]==false){
                    choose=19;
                }
            }else if(i==16){
                if(input[18]==false){
                    choose=18;
                }
                if(input[15]==false){
                    choose=15;
                }
                if(input[14]==false){
                    choose=14;
                }
                if(input[13]==false){
                    choose=13;
                }
            }else if(i==17){
                if(input[15]==false){
                    choose=15;
                }
                if(input[18]==false){
                    choose=18;
                }
                if(input[19]==false){
                    choose=19;
                }
                if(input[22]==false){
                    choose=22;
                }
                if(input[24]==false){
                    choose=24;
                }
                if(input[32]==false){
                    choose=32;
                }
            }else if(i==18){
                if(input[15]==false){
                    choose=15;
                }
                if(input[16]==false){
                    choose=16;
                }
                if(input[17]==false){
                    choose=17;
                }
                if(input[26]==false){
                    choose=26;
                }
                if(input[36]==false){
                    choose=36;
                }
                if(input[32]==false){
                    choose=32;
                }
            }else if(i==19){
                if(input[15]==false){
                    choose=15;
                }
                if(input[17]==false){
                    choose=17;
                }
                if(input[13]==false){
                    choose=13;
                }
                if(input[24]==false){
                    choose=24;
                }
            }else if(i==20){
                if(input[21]==false){
                    choose=15;
                }
                if(input[24]==false){
                    choose=17;
                }
                if(input[25]==false){
                    choose=13;
                }
            }else if(i==21){
                if(input[20]==false){
                    choose=20;
                }
                if(input[22]==false){
                    choose=22;
                }
                if(input[23]==false){
                    choose=23;
                }
                if(input[25]==false){
                    choose=25;
                }
                if(input[32]==false){
                    choose=32;
                }
            }else if(i==22){
                if(input[21]==false){
                    choose=21;
                }
                if(input[24]==false){
                    choose=24;
                }
                if(input[13]==false){
                    choose=13;
                }
                if(input[32]==false){
                    choose=32;
                }
            }else if(i==23){
                if(input[21]==false){
                    choose=21;
                }
                if(input[25]==false){
                    choose=25;
                }
            }else if(i==24){
                if(input[19]==false){
                    choose=19;
                }
                if(input[17]==false){
                    choose=17;
                }
                if(input[20]==false){
                    choose=20;
                }
                if(input[21]==false){
                    choose=21;
                }
                if(input[22]==false){
                    choose=22;
                }
                if(input[12]==false){
                    choose=12;
                }
                if(input[32]==false){
                    choose=32;
                }
            }else if(i==25){
                if(input[21]==false){
                    choose=21;
                }
                if(input[20]==false){
                    choose=20;
                }
                if(input[23]==false){
                    choose=23;
                }
            }else if(i==26){
                if(input[28]==false){
                    choose=28;
                }
                if(input[27]==false){
                    choose=27;
                }
                if(input[18]==false){
                    choose=18;
                }
                if(input[32]==false){
                    choose=32;
                }
                if(input[36]==false){
                    choose=36;
                }
            }else if(i==27){
                if(input[26]==false){
                    choose=26;
                }
                if(input[28]==false){
                    choose=28;
                }
                if(input[35]==false){
                    choose=35;
                }
                if(input[33]==false){
                    choose=33;
                }
                if(input[36]==false){
                    choose=36;
                }
                if(input[34]==false){
                    choose=34;
                }
            }else if(i==28){
                if(input[26]==false){
                    choose=26;
                }
                if(input[27]==false){
                    choose=27;
                }
                if(input[32]==false){
                    choose=32;
                }
                if(input[34]==false){
                    choose=34;
                }
            }else if(i==29){
                if(input[31]==false){
                    choose=31;
                }
                if(input[33]==false){
                    choose=33;
                }
                if(input[35]==false){
                    choose=35;
                }
                if(input[37]==false){
                    choose=37;
                }
            }else if(i==30){
                if(input[31]==false){
                    choose=31;
                }
                if(input[33]==false){
                    choose=33;
                }
            }else if(i==31){
                if(input[29]==false){
                    choose=29;
                }
                if(input[30]==false){
                    choose=30;
                }
                if(input[33]==false){
                    choose=33;
                }
                if(input[37]==false){
                    choose=37;
                }
            }else if(i==32){
                if(input[21]==false){
                    choose=21;
                }
                if(input[22]==false){
                    choose=22;
                }
                if(input[18]==false){
                    choose=18;
                }
                if(input[26]==false){
                    choose=26;
                }
                if(input[28]==false){
                    choose=28;
                }
            }else if(i==33){
                if(input[29]==false){
                    choose=29;
                }
                if(input[27]==false){
                    choose=27;
                }
                if(input[30]==false){
                    choose=30;
                }
                if(input[31]==false){
                    choose=31;
                }
            }else if(i==34){
                if(input[28]==false){
                    choose=28;
                }
                if(input[27]==false){
                    choose=27;
                }
                if(input[39]==false){
                    choose=39;
                }
            }else if(i==35){
                if(input[29]==false){
                    choose=29;
                }
                if(input[27]==false){
                    choose=27;
                }
                if(input[37]==false){
                    choose=37;
                }
                if(input[36]==false){
                    choose=36;
                }
            }else if(i==36){
                if(input[26]==false){
                    choose=26;
                }
                if(input[27]==false){
                    choose=27;
                }
                if(input[18]==false){
                    choose=18;
                }
                if(input[35]==false){
                    choose=35;
                }
            }else if(i==37){
                if(input[29]==false){
                    choose=29;
                }
                if(input[31]==false){
                    choose=31;
                }
                if(input[35]==false){
                    choose=35;
                }
            }else if(i==38){
                if(input[40]==false){
                    choose=40;
                }
                if(input[41]==false){
                    choose=41;
                }
            }else if(i==39){
                if(input[40]==false){
                    choose=40;
                }
                if(input[41]==false){
                    choose=41;
                }
                if(input[34]==false){
                    choose=34;
                }
            }else if(i==40){
                if(input[39]==false){
                    choose=39;
                }
                if(input[41]==false){
                    choose=41;
                }
                if(input[38]==false){
                    choose=38;
                }
            }else if(i==41){
                if(input[40]==false){
                    choose=40;
                }
                if(input[38]==false){
                    choose=38;
                }
                if(input[39]==false){
                    choose=39;
                }
            }
        }
    }
    return choose;
}
void control(bool input[]){
    int linechk;
    string nameof;
    bool verify;
    linechk=0;
    for(int i=0;i<=41;i++){
        if(input[i]==true){
            if(i==0){
                verify=true;
                nameof="Alaska";
                if(linechk<6){
                cout<<", "<<nameof;
                }else if(linechk>6){
                    cout<<", "<<nameof<<endl;
                }
            }
            if(i==1){
                verify=true;
                nameof="Alberta";
                if(linechk<6){
                cout<<", "<<nameof;
                }else if(linechk>6){
                    cout<<", "<<nameof<<endl;
                }
            }
            if(i==2){
                verify=true;
                nameof="Central America";
                if(linechk<6){
                cout<<", "<<nameof;
                }else if(linechk>6){
                    cout<<", "<<nameof<<endl;
                }
            }else if(i==3){
                verify=true;
                nameof="Eastern United States";
                if(linechk<6){
                cout<<", "<<nameof;
                }else if(linechk>6){
                    cout<<", "<<nameof<<endl;
                }
            }if(i==4){
                verify=true;
                nameof="Greenland";
                if(linechk<6){
                cout<<", "<<nameof;
                }else if(linechk>6){
                    cout<<", "<<nameof<<endl;
                }
            }if(i==5){
                verify=true;
                nameof="Northwest Territory";
                if(linechk<6){
                cout<<", "<<nameof;
                }else if(linechk>6){
                    cout<<", "<<nameof<<endl;
                }
            }if(i==6){
                verify=true;
                nameof="Ontario";
                if(linechk<6){
                cout<<", "<<nameof;
                }else if(linechk>6){
                    cout<<", "<<nameof<<endl;
                }
            }if(i==7){
                verify=true;
                nameof="Quebec";
                if(linechk<6){
                cout<<", "<<nameof;
                }else if(linechk>6){
                    cout<<", "<<nameof<<endl;
                }
            }if(i==8){
                verify=true;
                nameof="Western United States";
                if(linechk<6){
                cout<<", "<<nameof;
                }else if(linechk>6){
                    cout<<", "<<nameof<<endl;
                }
            }if(i==9){
                verify=true;
                nameof="Argentina";
                if(linechk<6){
                cout<<", "<<nameof;
                }else if(linechk>6){
                    cout<<", "<<nameof<<endl;
                }
            }if(i==10){
                verify=true;
                nameof="Brazil";
                if(linechk<6){
                cout<<", "<<nameof;
                }else if(linechk>6){
                    cout<<", "<<nameof<<endl;
                }
            }if(i==11){
                verify=true;
                nameof="Peru";
                if(linechk<6){
                cout<<", "<<nameof;
                }else if(linechk>6){
                    cout<<", "<<nameof<<endl;
                }
            }if(i==12){
                verify=true;
                nameof="Venezuela";
                if(linechk<6){
                cout<<", "<<nameof;
                }else if(linechk>6){
                    cout<<", "<<nameof<<endl;
                }
            }if(i==13){
                verify=true;
                nameof="Great Britain";
                if(linechk<6){
                cout<<", "<<nameof;
                }else if(linechk>6){
                    cout<<", "<<nameof<<endl;
                }
            }if(i==14){
                verify=true;
                nameof="Iceland";
                if(linechk<6){
                cout<<", "<<nameof;
                }else if(linechk>6){
                    cout<<", "<<nameof<<endl;
                }
            }if(i==15){
                verify=true;
                nameof="Northern Europe";
                if(linechk<6){
                cout<<", "<<nameof;
                }else if(linechk>6){
                    cout<<", "<<nameof<<endl;
                }
            }if(i==16){
                verify=true;
                nameof="Scandinavia";
                if(linechk<6){
                cout<<", "<<nameof;
                }else if(linechk>6){
                    cout<<", "<<nameof<<endl;
                }
            }if(i==17){
                verify=true;
                nameof="Southern Europe";
                if(linechk<6){
                cout<<", "<<nameof;
                }else if(linechk>6){
                    cout<<", "<<nameof<<endl;
                }
            }if(i==18){
                verify=true;
                nameof="Ukraine";
                if(linechk<6){
                cout<<", "<<nameof;
                }else if(linechk>6){
                    cout<<", "<<nameof<<endl;
                }
            }if(i==19){
                verify=true;
                nameof="Western Europe";
                if(linechk<6){
                cout<<", "<<nameof;
                }else if(linechk>6){
                    cout<<", "<<nameof<<endl;
                }
            }if(i==20){
                verify=true;
                nameof="Congo";
                if(linechk<6){
                cout<<", "<<nameof;
                }else if(linechk>6){
                    cout<<", "<<nameof<<endl;
                }
            }if(i==21){
                verify=true;
                nameof="East Africa";
                if(linechk<6){
                cout<<", "<<nameof;
                }else if(linechk>6){
                    cout<<", "<<nameof<<endl;
                }
            }if(i==22){
                verify=true;
                nameof="Egypt";
                if(linechk<6){
                cout<<", "<<nameof;
                }else if(linechk>6){
                    cout<<", "<<nameof<<endl;
                }
            }if(i==23){
                verify=true;
                nameof="Madagascar";
                if(linechk<6){
                cout<<", "<<nameof;
                }else if(linechk>6){
                    cout<<", "<<nameof<<endl;
                }
            }if(i==24){
                verify=true;
                nameof="North Africa";
                if(linechk<6){
                cout<<", "<<nameof;
                }else if(linechk>6){
                    cout<<", "<<nameof<<endl;
                }
            }if(i==25){
                verify=true;
                nameof="South Africa";
                if(linechk<6){
                cout<<", "<<nameof;
                }else if(linechk>6){
                    cout<<", "<<nameof<<endl;
                }
            }if(i==26){
                verify=true;
                nameof="Afghanistan";
                if(linechk<6){
                cout<<", "<<nameof;
                }else if(linechk>6){
                    cout<<", "<<nameof<<endl;
                }
            }if(i==27){
                verify=true;
                nameof="China";
                if(linechk<6){
                cout<<", "<<nameof;
                }else if(linechk>6){
                    cout<<", "<<nameof<<endl;
                }
            }if(i==28){
                verify=true;
                nameof="India";
                if(linechk<6){
                cout<<", "<<nameof;
                }else if(linechk>6){
                    cout<<", "<<nameof<<endl;
                }
            }if(i==29){
                verify=true;
                nameof="Irkutsk";
                if(linechk<6){
                cout<<", "<<nameof;
                }else if(linechk>6){
                    cout<<", "<<nameof<<endl;
                }
            }if(i==30){
                verify=true;
                nameof="Japan";
                if(linechk<6){
                cout<<", "<<nameof;
                }else if(linechk>6){
                    cout<<", "<<nameof<<endl;
                }
            }if(i==31){
                verify=true;
                nameof="Kamchatka";
                if(linechk<6){
                cout<<", "<<nameof;
                }else if(linechk>6){
                    cout<<", "<<nameof<<endl;
                }
            }if(i==32){
                verify=true;
                nameof="Middle East";
                if(linechk<6){
                cout<<", "<<nameof;
                }else if(linechk>6){
                    cout<<", "<<nameof<<endl;
                }
            }if(i==33){
                verify=true;
                nameof="Mongolia";
                if(linechk<6){
                cout<<", "<<nameof;
                }else if(linechk>6){
                    cout<<", "<<nameof<<endl;
                }
            }if(i==34){
                verify=true;
                nameof="Siam";
                if(linechk<6){
                cout<<", "<<nameof;
                }else if(linechk>6){
                    cout<<", "<<nameof<<endl;
                }
            }if(i==35){
                verify=true;
                nameof="Siberia";
                if(linechk<6){
                cout<<", "<<nameof;
                }else if(linechk>6){
                    cout<<", "<<nameof<<endl;
                }
            }if(i==36){
                verify=true;
                nameof="Ural";
                if(linechk<6){
                cout<<", "<<nameof;
                }else if(linechk>6){
                    cout<<", "<<nameof<<endl;
                }
            }if(i==37){
                verify=true;
                nameof="Yakutsk";
                if(linechk<6){
                cout<<", "<<nameof;
                }else if(linechk>6){
                    cout<<", "<<nameof<<endl;
                }
            }if(i==38){
                verify=true;
                nameof="Eastern Australia";
                if(linechk<6){
                cout<<", "<<nameof;
                }else if(linechk>6){
                    cout<<", "<<nameof<<endl;
                }
            }if(i==39){
                verify=true;
                nameof="Indonesia";
                if(linechk<6){
                cout<<", "<<nameof;
                }else if(linechk>6){
                    cout<<", "<<nameof<<endl;
                }
            }if(i==40){
                verify=true;
                nameof="New Guinea";
                if(linechk<6){
                cout<<", "<<nameof;
                }else if(linechk>6){
                    cout<<", "<<nameof<<endl;
                }
            }if(i==41){
                verify=true;
                nameof="Western Australia";
                if(linechk<6){
                cout<<", "<<nameof;
                }else if(linechk>6){
                    cout<<", "<<nameof<<endl;
                }
            }
        }
    }
    cout<<endl;
}
bool ifwon(bool check[]){
    bool didwin;
    int totland;
    totland=0;
    for(int i=0;i<=41;i++){
        if(check[i]==true){
            totland=totland+1;
            if(totland==42){
                didwin=true;
            }
        }
    }
    return didwin;
}
int reward(bool input[]){
    int recieve;
    recieve=0;
    for(int i=0;i<=41;i++){
        if(input[i]==true){
            recieve=recieve+1;
        }
    }
    return recieve;
}
int totarmy(int input[]){
    int output;
    output=0;
    for(int i=0;i<=41;i++){
        output=output+input[i];
    }
    return output;
}
int totcard(int input[]){
    int output;
    output=0;
    for(int i=0;i<=41;i++){
        output=output+input[i];
    }
    return output;
}
string name(int input){
    string output;
    if(input==0){
        output="Alaska";
    }else if(input==1){
        output="Alberta";
    }else if(input==2){
        output="Central America";
    }else if(input==3){
        output="Eastern United States";
    }else if(input==4){
        output="Greenland";
    }else if(input==5){
        output="Northwest Territory";
    }else if(input==6){
        output="Ontario";
    }else if(input==7){
        output="Quebec";
    }else if(input==8){
        output="Western United States";
    }else if(input==9){
        output="Argentina";
    }else if(input==10){
        output="Brazil";
    }else if(input==11){
        output="Peru";
    }else if(input==12){
        output="Venezuela";
    }else if(input==13){
        output="Great Britain";
    }else if(input==14){
        output="Iceland";
    }else if(input==15){
        output="Northern Europe";
    }else if(input==16){
        output="Scandinavia";
    }else if(input==17){
        output="Southern Europe";
    }else if(input==18){
        output="Ukraine";
    }else if(input==19){
        output="Western Europe";
    }else if(input==20){
        output="Congo";
    }else if(input==21){
        output="East Africa";
    }else if(input==22){
        output="Egypt";
    }else if(input==23){
        output="Madagascar";
    }else if(input==24){
        output="North Africa";
    }else if(input==25){
        output="South Africa";
    }else if(input==26){
        output="Afghanistan";
    }else if(input==27){
        output="China";
    }else if(input==28){
        output="India";
    }else if(input==29){
        output="Irkutsk";
    }else if(input==30){
        output="Japan";
    }else if(input==31){
        output="Kamchatka";
    }else if(input==32){
        output="Middle East";
    }else if(input==33){
        output="Mongolia";
    }else if(input==34){
        output="Siam";
    }else if(input==35){
        output="Siberia";
    }else if(input==36){
        output="Ural";
    }else if(input==37){
        output="Yakutsk";
    }else if(input==38){
        output="Eastern Australia";
    }else if(input==39){
        output="Indonesia";
    }else if(input==40){
        output="New Guinea";
    }else if(input==41){
        output="Western Australia";
    }
    return output;
}
void list(){
    cout<<"The country list shows as follows, each number corresponds to a country."<<endl;
    cout<<"1: "<<setw(5)<<"Alaska"<<endl;
    cout<<"2: "<<setw(5)<<"Alberta"<<endl;
    cout<<"3: "<<setw(5)<<"Central America"<<endl;
    cout<<"4: "<<setw(5)<<"Eastern United States"<<endl;
    cout<<"5: "<<setw(5)<<"Greenland"<<endl;
    cout<<"6: "<<setw(5)<<"Northwest Territory"<<endl;
    cout<<"7: "<<setw(5)<<"Ontario"<<endl;
    cout<<"8: "<<setw(5)<<"Quebec"<<endl;
    cout<<"9: "<<setw(5)<<"Western United States"<<endl;
    cout<<"10: "<<setw(5)<<"Argentina"<<endl;
    cout<<"11: "<<setw(5)<<"Brazil"<<endl;
    cout<<"12: "<<setw(5)<<"Peru"<<endl;
    cout<<"13: "<<setw(5)<<"Venezuela"<<endl;
    cout<<"14: "<<setw(5)<<"Great Britain"<<endl;
    cout<<"15: "<<setw(5)<<"Iceland"<<endl;
    cout<<"16: "<<setw(5)<<"Northern Europe"<<endl;
    cout<<"17: "<<setw(5)<<"Scandinavia"<<endl;
    cout<<"18: "<<setw(5)<<"Southern Europe"<<endl;
    cout<<"19: "<<setw(5)<<"Ukraine"<<endl;
    cout<<"20: "<<setw(5)<<"Western Europe"<<endl;
    cout<<"21: "<<setw(5)<<"Congo"<<endl;
    cout<<"22: "<<setw(5)<<"East Africa"<<endl;
    cout<<"23: "<<setw(5)<<"Egypt"<<endl;
    cout<<"24: "<<setw(5)<<"Madagascar"<<endl;
    cout<<"25: "<<setw(5)<<"North Africa"<<endl;
    cout<<"26: "<<setw(5)<<"South Africa"<<endl;
    cout<<"27: "<<setw(5)<<"Afghanistan"<<endl;
    cout<<"28: "<<setw(5)<<"China"<<endl;
    cout<<"29: "<<setw(5)<<"India"<<endl;
    cout<<"30: "<<setw(5)<<"Irkutsk"<<endl;
    cout<<"31: "<<setw(5)<<"Japan"<<endl;
    cout<<"32: "<<setw(5)<<"Kamchatka"<<endl;
    cout<<"33: "<<setw(5)<<"Middle East"<<endl;
    cout<<"34: "<<setw(5)<<"Mongolia"<<endl;
    cout<<"35: "<<setw(5)<<"Siam"<<endl;
    cout<<"36: "<<setw(5)<<"Siberia"<<endl;
    cout<<"37: "<<setw(5)<<"Ural"<<endl;
    cout<<"38: "<<setw(5)<<"Yakutsk"<<endl;
    cout<<"39: "<<setw(5)<<"Eastern Australia"<<endl;
    cout<<"40: "<<setw(5)<<"Indonesia"<<endl;
    cout<<"41: "<<setw(5)<<"New Guinea"<<endl;
    cout<<"42: "<<setw(5)<<"Western Australia"<<endl;
}

