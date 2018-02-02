/* 
 * File:   main.cpp
 * Author: Mohammad Mohammad
 * Created on January 19, 2018, 12:26 PM
 * Purpose:  MOhammad Mohammad
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
//Program Execution Begins Here
int main(int argc, char** argv) {
    //initialize random number generator
    srand(time(0));
    int dummy=rand()%42;
    //Declare all Variables Here
    int input; 
    int rolldie,rolldie2;
    string output,output2,output3;
    int country; 
    int army;
    int plr2;
    int plr2army;
    int plr3;
    int plr3army;
    int plr2size;
    int plr3size;
    //Input or initialize values Here
    cout<<"Welcome to the game of Risk! This is a game between you and 4 other computers!"<<endl;
    cout<<"Enter a number representing a starting country."<<endl;
    cout<<"Alaska 1, Alberta 2, Central America 3, East US 4, "<<endl;
    cout<<"Greenland 5, NWest Territory 6, Ontario 7, Quebec 8,"<<endl; 
    cout<<"West US 9, Argentina 10, Brazil 11, Peru 12,Venezuela 13,"<<endl;
    cout<<"Britain 14, Iceland 15, North Europe 16, Scandinavia 17,"<<endl; 
    cout<<"South Europe 18, Ukraine 19, West Europe 20, Congo 21, "<<endl;
    cout<<"East Africa 22, Egypt 23, Madagascar 24, North Africa 25,"<<endl;
    cout<<"South Africa 26, Afghanistan 27, China 28, India 29, Irkutsk 30,"<<endl;
    cout<<"Japan 31, Kamchatka 32, Middle East 33, Mongolia 34, Siam 35, "<<endl;
    cout<<"Siberia 36, Ural 37, Yakutsk 38, East Australia 39, "<<endl;
    cout<<"Indonesia 40, New Guinea 41, West Australia 42"<<endl;
    cin>>input;
    if(input==1){
          output=" Alaska";
          country=1;
      }else if(input==2){
          output=" Alberta";
          country=2;
      }else if(input==3){
          output=" Central America";
          country=3;
      }else if(input==4){
          output=" East US";
          country=4;
      }else if(input==5){
          output=" Greenland";
          country=5;
      }else if(input==6){
          output=" NWest Territory";
          country=6;
      }else if(input==7){
          output=" Ontario";
          country=7;
      }else if(input==8){
          output=" Quebec";
          country=8;
      }else if(input==9){
          output=" West US";
          country=9;
      }else if(input==10){
          output=" Argentina";
          country=10;
      }else if(input==11){
          output=" Brazil";
          country=11;
      }else if(input==12){
          output=" Peru";
          country=12;
      }else if(input==13){
          output=" Venezuela";
          country=13;
      }else if(input==14){
          output=" Britain";
          country=14;
      }else if(input==15){
          output=" Iceland";
          country=15;
      }else if(input==16){
          output=" North Europe";
          country=16;
      }else if(input==17){
          output=" Scandinavia";
          country=17;
      }else if(input==18){
          output=" South Europe";
          country=18;
      }else if(input==19){
          output=" Ukraine";
          country=19;
      }else if(input==20){
          output=" West Europe";
          country=20;
      }else if(input==21){
          output=" Congo";
          country=21;
      }else if(input==22){
          output=" East Africa";
          country=22;
      }else if(input==23){
          output=" Egypt";
          country=23;
      }else if(input==24){
          output=" Madagascar";
          country=24;
      }else if(input==25){
          output=" North Africa";
          country=25;
      }else if(input==26){
          output=" South Africa";
          country=26;
      }else if(input==27){
          output=" Afghanistan";
          country=27;
      }else if(input==28){
          output=" China";
          country=28;
      }else if(input==28){
          output=" India";
          country=29;
      }else if(input==30){
          output=" Irkutsk";
          country=30;
      }else if(input==31){
          output=" Japan";
          country=31;
      }else if(input==32){
          output=" Kamchatka";
          country=32;
      }else if(input==33){
          output=" Middle East";
          country=33;
      }else if(input==34){
          output=" Mongolia";
          country=34;
      }else if(input==35){
          output=" Siam";
          country=35;
      }else if(input==36){
          output=" Siberia";
          country=36;
      }else if(input==37){
          output=" Ural";
          country=37;
      }else if(input==38){
          output=" Yakutsk";
          country=38;
      }else if(input==39){
          output=" East Australia";
          country=39;
      }else if(input==40){
          output=" Indonesia";
          country=40;
      }else if(input==41){
          output=" New Guinea";
          country=41;
      }else if(input==42){
          output=" West Australia";
          country=42;
      }
    //Process/Calculations Here
    
    //Output Located Here
    cout<<"You are "<<output<<endl;
    plr2=rand()%42;
    if(plr2==1){
          output2=" Alaska";
          plr2army=1;
      }else if(plr2==2){
          output2=" Alberta";
          plr2army=2;
      }else if(plr2==3){
          output2=" Central America";
          plr2army=3;
      }else if(plr2==4){
          output2=" East US";
          plr2army=4;
      }else if(plr2==5){
          output2=" Greenland";
          plr2army=5;
      }else if(plr2==6){
          output2=" NWest Territory";
          plr2army=6;
      }else if(plr2==7){
          output2=" Ontario";
          plr2army=7;
      }else if(plr2==8){
          output2=" Quebec";
          plr2army=8;
      }else if(plr2==9){
          output2=" West US";
          plr2army=9;
      }else if(plr2==10){
          output2=" Argentina";
          plr2army=10;
      }else if(plr2==11){
          output2=" Brazil";
          plr2army=11;
      }else if(plr2==12){
          output2=" Peru";
          plr2army=12;
      }else if(plr2==13){
          output2=" Venezuela";
          plr2army=13;
      }else if(plr2==14){
          output2=" Britain";
          plr2army=14;
      }else if(plr2==15){
          output2=" Iceland";
          plr2army=15;
      }else if(plr2==16){
          output2=" North Europe";
          plr2army=16;
      }else if(plr2==17){
          output2=" Scandinavia";
          plr2army=17;
      }else if(plr2==18){
          output2=" South Europe";
          plr2army=18;
      }else if(plr2==19){
          output2=" Ukraine";
          plr2army=19;
      }else if(plr2==20){
          output2=" West Europe";
          plr2army=20;
      }else if(plr2==21){
          output2=" Congo";
          plr2army=21;
      }else if(plr2==22){
          output2=" East Africa";
          plr2army=22;
      }else if(plr2==23){
          output2=" Egypt";
          plr2army=23;
      }else if(plr2==24){
          output2=" Madagascar";
          plr2army=24;
      }else if(plr2==25){
          output2=" North Africa";
          plr2army=25;
      }else if(plr2==26){
          output2=" South Africa";
          plr2army=26;
      }else if(plr2==27){
          output2=" Afghanistan";
          plr2army=27;
      }else if(plr2==28){
          output2=" China";
          plr2army=28;
      }else if(plr2==28){
          output2=" India";
          plr2army=29;
      }else if(plr2==30){
          output2=" Irkutsk";
          plr2army=30;
      }else if(plr2==31){
          output2=" Japan";
          plr2army=31;
      }else if(plr2==32){
          output2=" Kamchatka";
          plr2army=32;
      }else if(plr2==33){
          output2=" Middle East";
          plr2army=33;
      }else if(plr2==34){
          output2=" Mongolia";
          plr2army=34;
      }else if(plr2==35){
          output2=" Siam";
          plr2army=35;
      }else if(plr2==36){
          output2=" Siberia";
          plr2army=36;
      }else if(plr2==37){
          output2=" Ural";
          plr2army=37;
      }else if(plr2==38){
          output2=" Yakutsk";
          plr2army=38;
      }else if(plr2==39){
          output2=" East Australia";
          plr2army=39;
      }else if(plr2==40){
          output2=" Indonesia";
          plr2army=40;
      }else if(plr2==41){
          output2=" New Guinea";
          plr2army=41;
      }else if(plr2==42){
          output2=" West Australia";
          plr2army=42;
      }
    cout<<"The AI is in"<<output<<endl;
    plr3=rand()%42;
    if(plr3==1){
          output3=" Alaska";
          plr3army=1;
      }else if(plr3==2){
          output3=" Alberta";
          plr3army=2;
      }else if(plr3==3){
          output3=" Central America";
          plr3army=3;
      }else if(plr3==4){
          output3=" East US";
          plr3army=4;
      }else if(plr3==5){
          output3=" Greenland";
          plr3army=5;
      }else if(plr3==6){
          output3=" NWest Territory";
          plr3army=6;
      }else if(plr3==7){
          output3=" Ontario";
          plr3army=7;
      }else if(plr3==8){
          output3=" Quebec";
          plr3army=8;
      }else if(plr3==9){
          output3=" West US";
          plr3army=9;
      }else if(plr3==10){
          output3=" Argentina";
          plr3army=10;
      }else if(plr3==11){
          output3=" Brazil";
          plr3army=11;
      }else if(plr3==12){
          output3=" Peru";
          plr3army=12;
      }else if(plr3==13){
          output3=" Venezuela";
          plr3army=13;
      }else if(plr3==14){
          output3=" Britain";
          plr3army=14;
      }else if(plr3==15){
          output3=" Iceland";
          plr3army=15;
      }else if(plr3==16){
          output3=" North Europe";
          plr3army=16;
      }else if(plr3==17){
          output3=" Scandinavia";
          plr3army=17;
      }else if(plr3==18){
          output3=" South Europe";
          plr3army=18;
      }else if(plr3==19){
          output3=" Ukraine";
          plr3army=19;
      }else if(plr3==20){
          output3=" West Europe";
          plr3army=20;
      }else if(plr3==21){
          output3=" Congo";
          plr3army=21;
      }else if(plr3==22){
          output3=" East Africa";
          plr3army=22;
      }else if(plr3==23){
          output3=" Egypt";
          plr3army=23;
      }else if(plr3==24){
          output3=" Madagascar";
          plr3army=24;
      }else if(plr3==25){
          output3=" North Africa";
          plr3army=25;
      }else if(plr3==26){
          output3=" South Africa";
          plr3army=26;
      }else if(plr3==27){
          output3=" Afghanistan";
          plr3army=27;
      }else if(plr3==28){
          output3=" China";
          plr3army=28;
      }else if(plr3==28){
          output3=" India";
          plr3army=29;
      }else if(plr3==30){
          output3=" Irkutsk";
          plr3army=30;
      }else if(plr3==31){
          output3=" Japan";
          plr3army=31;
      }else if(plr3==32){
          output3=" Kamchatka";
          plr3army=32;
      }else if(plr3==33){
          output3=" Middle East";
          plr3army=33;
      }else if(plr3==34){
          output3=" Mongolia";
          plr3army=34;
      }else if(plr3==35){
          output3=" Siam";
          plr3army=35;
      }else if(plr3==36){
          output3=" Siberia";
          plr3army=36;
      }else if(plr3==37){
          output3=" Ural";
          plr3army=37;
      }else if(plr3==38){
          output3=" Yakutsk";
          plr3army=38;
      }else if(plr3==39){
          output3=" East Australia";
          plr3army=39;
      }else if(plr3==40){
          output3=" Indonesia";
          plr3army=40;
      }else if(plr3==41){
          output3=" New Guinea";
          plr3army=41;
      }else if(plr3==42){
          output3=" West Australia";
          plr3army=42;
      }
    cout<<"The second AI is in "<<output3<<endl;
    army=5;
    plr2size=5;
    plr3size=5;
    for(int i=1;army<=100;i++){
        if(army<1){
            cout<<"You have lost all your military might. You lose."<<endl;
            return 0;
        }
        int add=army/3;
        int add2=plr2size/3;
        int add3=plr3size/3;
        plr2size=plr2size+add2;
        plr3size=plr3size+add3;
        cout<<"You got "<<add<<" Soldiers added to your army."<<endl;
        cout<<"Your army is "<<army<<" troops strong"<<endl;
        cout<<"Player 2 has "<<plr2size<<" troops remaining."<<endl;
        cout<<"Player 3 has "<<plr3size<<" troops remaining."<<endl;
        cout<<endl;
        army=add+army;
        cout<<"Select a country to invade."<<endl;
        cout<<"Alaska 1, Alberta 2, Central America 3, East US 4, "<<endl;
    cout<<"Greenland 5, NWest Territory 6, Ontario 7, Quebec 8,"<<endl; 
    cout<<"West US 9, Argentina 10, Brazil 11, Peru 12,Venezuela 13,"<<endl;
    cout<<"Britain 14, Iceland 15, North Europe 16, Scandinavia 17,"<<endl; 
    cout<<"South Europe 18, Ukraine 19, West Europe 20, Congo 21, "<<endl;
    cout<<"East Africa 22, Egypt 23, Madagascar 24, North Africa 25,"<<endl;
    cout<<"South Africa 26, Afghanistan 27, China 28, India 29, Irkutsk 30,"<<endl;
    cout<<"Japan 31, Kamchatka 32, Middle East 33, Mongolia 34, Siam 35, "<<endl;
    cout<<"Siberia 36, Ural 37, Yakutsk 38, East Australia 39, "<<endl;
    cout<<"Indonesia 40, New Guinea 41, West Australia 42"<<endl;
    cin>>input;
        if(input==1){
            if(input!=plr2army||input!=plr3army){
                cout<<"You have successfully conquered Alaska!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                army=army+1;
            }else{
                if(input==plr2army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered Alaska!"<<endl;
                        army=army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(input==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered Alaska!"<<endl;
                        army=army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
            
      }else if(input==2){
          if(input!=plr2army||input!=plr3army){
                cout<<"You have successfully conquered East US!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                army=army+1;
            }else{
                if(input==plr2army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        army=army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(input==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        army=army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(input==3){
          if(input!=plr2army||input!=plr3army){
                cout<<"You have successfully conquered Central America"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                army=army+1;
            }else{
                if(input==plr2army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        army=army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(input==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        army=army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(input==4){
          if(input!=plr2army||input!=plr3army){
                cout<<"You have successfully conquered Greenland"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                army=army+1;
            }else{
                if(input==plr2army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        army=army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(input==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        army=army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(input==5){
          if(input!=plr2army||input!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                army=army+1;
            }else{
                if(input==plr2army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        army=army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(input==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        army=army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(input==6){
          if(input!=plr2army||input!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                army=army+1;
            }else{
                if(input==plr2army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        army=army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(input==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        army=army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(input==7){
          if(input!=plr2army||input!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                army=army+1;
            }else{
                if(input==plr2army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        army=army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(input==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        army=army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(input==8){
          if(input!=plr2army||input!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                army=army+1;
            }else{
                if(input==plr2army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        army=army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(input==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        army=army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(input==9){
          if(input!=plr2army||input!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                army=army+1;
            }else{
                if(input==plr2army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        army=army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(input==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        army=army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(input==10){
          if(input!=plr2army||input!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                army=army+1;
            }else{
                if(input==plr2army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        army=army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(input==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        army=army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(input==11){
          if(input!=plr2army||input!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                army=army+1;
            }else{
                if(input==plr2army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        army=army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(input==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        army=army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(input==12){
          if(input!=plr2army||input!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                army=army+1;
            }else{
                if(input==plr2army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        army=army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(input==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        army=army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(input==13){
          if(input!=plr2army||input!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                army=army+1;
            }else{
                if(input==plr2army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        army=army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(input==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        army=army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(input==14){
          if(input!=plr2army||input!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                army=army+1;
            }else{
                if(input==plr2army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        army=army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(input==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        army=army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(input==15){
          if(input!=plr2army||input!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                army=army+1;
            }else{
                if(input==plr2army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        army=army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(input==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        army=army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(input==16){
          if(input!=plr2army||input!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                army=army+1;
            }else{
                if(input==plr2army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        army=army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(input==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        army=army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(input==17){
          if(input!=plr2army||input!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                army=army+1;
            }else{
                if(input==plr2army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        army=army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(input==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        army=army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(input==18){
          if(input!=plr2army||input!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                army=army+1;
            }else{
                if(input==plr2army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        army=army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(input==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        army=army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(input==19){
          if(input!=plr2army||input!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                army=army+1;
            }else{
                if(input==plr2army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        army=army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(input==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        army=army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(input==20){
          if(input!=plr2army||input!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                army=army+1;
            }else{
                if(input==plr2army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        army=army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(input==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        army=army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(input==21){
          if(input!=plr2army||input!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                army=army+1;
            }else{
                if(input==plr2army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        army=army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(input==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        army=army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(input==22){
          if(input!=plr2army||input!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                army=army+1;
            }else{
                if(input==plr2army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        army=army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(input==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        army=army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(input==23){
          if(input!=plr2army||input!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                army=army+1;
            }else{
                if(input==plr2army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        army=army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(input==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        army=army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(input==24){
          if(input!=plr2army||input!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                army=army+1;
            }else{
                if(input==plr2army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        army=army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(input==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        army=army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(input==25){
          if(input!=plr2army||input!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                army=army+1;
            }else{
                if(input==plr2army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        army=army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(input==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        army=army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(input==26){
          if(input!=plr2army||input!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                army=army+1;
            }else{
                if(input==plr2army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        army=army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(input==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        army=army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(input==27){
          if(input!=plr2army||input!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                army=army+1;
            }else{
                if(input==plr2army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        army=army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(input==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        army=army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(input==28){
          if(input!=plr2army||input!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                army=army+1;
            }else{
                if(input==plr2army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        army=army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(input==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        army=army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(input==28){
          if(input!=plr2army||input!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                army=army+1;
            }else{
                if(input==plr2army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        army=army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(input==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        army=army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(input==30){
          if(input!=plr2army||input!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                army=army+1;
            }else{
                if(input==plr2army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        army=army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(input==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        army=army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(input==31){
          if(input!=plr2army||input!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                army=army+1;
            }else{
                if(input==plr2army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        army=army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(input==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        army=army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(input==32){
          if(input!=plr2army||input!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                army=army+1;
            }else{
                if(input==plr2army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        army=army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(input==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        army=army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(input==33){
          if(input!=plr2army||input!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                army=army+1;
            }else{
                if(input==plr2army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        army=army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(input==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        army=army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(input==34){
          if(input!=plr2army||input!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                army=army+1;
            }else{
                if(input==plr2army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        army=army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(input==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        army=army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(input==35){
          if(input!=plr2army||input!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                army=army+1;
            }else{
                if(input==plr2army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        army=army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(input==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        army=army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(input==36){
          if(input!=plr2army||input!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                army=army+1;
            }else{
                if(input==plr2army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        army=army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(input==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        army=army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(input==37){
          if(input!=plr2army||input!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                army=army+1;
            }else{
                if(input==plr2army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        army=army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(input==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        army=army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(input==38){
          if(input!=plr2army||input!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                army=army+1;
            }else{
                if(input==plr2army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        army=army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(input==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        army=army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(input==39){
          if(input!=plr2army||input!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                army=army+1;
            }else{
                if(input==plr2army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        army=army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(input==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        army=army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(input==40){
          if(input!=plr2army||input!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                army=army+1;
            }else{
                if(input==plr2army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        army=army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(input==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        army=army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(input==41){
          if(input!=plr2army||input!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                army=army+1;
            }else{
                if(input==plr2army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        army=army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(input==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        army=army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(input==42){
          if(input!=plr2army||input!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                army=army+1;
            }else{
                if(input==plr2army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        army=army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(input==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        army=army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }
    plr2=rand()%42;
    plr3=rand()%42;
    if(plr2==1){
            if(plr2!=plr2army||plr2!=plr3army){
                cout<<"You have successfully conquered Alaska!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                plr2army=plr2army+1;
            }else{
                if(plr2==army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered Alaska!"<<endl;
                        plr2army=plr2army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(plr2==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered Alaska!"<<endl;
                        plr2army=plr2army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
            
      }else if(plr2==2){
          if(plr2!=army||plr2!=plr3army){
                cout<<"You have successfully conquered East US!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                plr2army=plr2army+1;
            }else{
                if(plr2==army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        plr2army=plr2army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(plr2==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        plr2army=plr2army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(plr2==3){
          if(plr2!=army||plr2!=plr3army){
                cout<<"You have successfully conquered Central America"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                plr2army=plr2army+1;
            }else{
                if(plr2==army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        plr2army=plr2army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(plr2==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        plr2army=plr2army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(plr2==4){
          if(plr2!=army||plr2!=plr3army){
                cout<<"You have successfully conquered Greenland"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                plr2army=plr2army+1;
            }else{
                if(plr2==army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        plr2army=plr2army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(plr2==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        plr2army=plr2army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(plr2==5){
          if(plr2!=army||plr2!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                plr2army=plr2army+1;
            }else{
                if(plr2==army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        plr2army=plr2army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(plr2==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        plr2army=plr2army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(plr2==6){
          if(plr2!=army||plr2!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                plr2army=plr2army+1;
            }else{
                if(plr2==army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        plr2army=plr2army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(plr2==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        plr2army=plr2army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(plr2==7){
          if(plr2!=army||plr2!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                plr2army=plr2army+1;
            }else{
                if(plr2==army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        plr2army=plr2army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(plr2==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        plr2army=plr2army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(plr2==8){
          if(plr2!=army||plr2!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                plr2army=plr2army+1;
            }else{
                if(plr2==army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        plr2army=plr2army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(plr2==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        plr2army=plr2army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(plr2==9){
          if(plr2!=army||plr2!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                plr2army=plr2army+1;
            }else{
                if(plr2==army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        plr2army=plr2army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(plr2==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        plr2army=plr2army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(plr2==10){
          if(plr2!=army||plr2!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                plr2army=plr2army+1;
            }else{
                if(plr2==army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        plr2army=plr2army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(plr2==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        plr2army=plr2army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(plr2==11){
          if(plr2!=army||plr2!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                plr2army=plr2army+1;
            }else{
                if(plr2==army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        plr2army=plr2army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(plr2==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        plr2army=plr2army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(plr2==12){
          if(plr2!=army||plr2!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                plr2army=plr2army+1;
            }else{
                if(plr2==army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        plr2army=plr2army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(plr2==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        plr2army=plr2army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(plr2==13){
          if(plr2!=army||plr2!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                plr2army=plr2army+1;
            }else{
                if(plr2==army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        plr2army=plr2army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(plr2==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        plr2army=plr2army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(plr2==14){
          if(plr2!=army||plr2!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                plr2army=plr2army+1;
            }else{
                if(plr2==army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        plr2army=plr2army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(plr2==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        plr2army=plr2army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(plr2==15){
          if(plr2!=army||plr2!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                plr2army=plr2army+1;
            }else{
                if(plr2==army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        plr2army=plr2army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(plr2==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        plr2army=plr2army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(plr2==16){
          if(plr2!=army||plr2!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                plr2army=plr2army+1;
            }else{
                if(plr2==army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        plr2army=plr2army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(plr2==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        plr2army=plr2army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(plr2==17){
          if(plr2!=army||plr2!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                plr2army=plr2army+1;
            }else{
                if(plr2==army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        plr2army=plr2army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(plr2==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        plr2army=plr2army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(plr2==18){
          if(plr2!=army||plr2!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                plr2army=plr2army+1;
            }else{
                if(plr2==army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        plr2army=plr2army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(plr2==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        plr2army=plr2army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(plr2==19){
          if(plr2!=army||plr2!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                plr2army=plr2army+1;
            }else{
                if(plr2==army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        plr2army=plr2army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(plr2==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        plr2army=plr2army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(plr2==20){
          if(plr2!=army||plr2!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                plr2army=plr2army+1;
            }else{
                if(plr2==army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        plr2army=plr2army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(plr2==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        plr2army=plr2army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(plr2==21){
          if(plr2!=army||plr2!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                plr2army=plr2army+1;
            }else{
                if(plr2==army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        plr2army=plr2army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(plr2==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        plr2army=plr2army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(plr2==22){
          if(plr2!=army||plr2!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                plr2army=plr2army+1;
            }else{
                if(plr2==army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        plr2army=plr2army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(plr2==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        plr2army=plr2army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(plr2==23){
          if(plr2!=army||plr2!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                plr2army=plr2army+1;
            }else{
                if(plr2==army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        plr2army=plr2army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(plr2==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        plr2army=plr2army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(plr2==24){
          if(plr2!=army||plr2!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                plr2army=plr2army+1;
            }else{
                if(plr2==army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        plr2army=plr2army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(plr2==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        plr2army=plr2army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(plr2==25){
          if(plr2!=army||plr2!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                plr2army=plr2army+1;
            }else{
                if(plr2==army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        plr2army=plr2army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(plr2==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        plr2army=plr2army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(plr2==26){
          if(plr2!=army||plr2!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                plr2army=plr2army+1;
            }else{
                if(plr2==army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        plr2army=plr2army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(plr2==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        plr2army=plr2army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(plr2==27){
          if(plr2!=army||plr2!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                plr2army=plr2army+1;
            }else{
                if(plr2==army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        plr2army=plr2army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(plr2==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        plr2army=plr2army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(plr2==28){
          if(plr2!=army||plr2!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                plr2army=plr2army+1;
            }else{
                if(plr2==army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        plr2army=plr2army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(plr2==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        plr2army=plr2army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(plr2==28){
          if(plr2!=army||plr2!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                plr2army=plr2army+1;
            }else{
                if(plr2==army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        plr2army=plr2army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(plr2==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        plr2army=plr2army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(plr2==30){
          if(plr2!=army||plr2!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                plr2army=plr2army+1;
            }else{
                if(plr2==army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        plr2army=plr2army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(plr2==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        plr2army=plr2army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(plr2==31){
          if(plr2!=army||plr2!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                plr2army=plr2army+1;
            }else{
                if(plr2==army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        plr2army=plr2army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(plr2==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        plr2army=plr2army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(plr2==32){
          if(plr2!=army||plr2!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                plr2army=plr2army+1;
            }else{
                if(plr2==army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        plr2army=plr2army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(plr2==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        plr2army=plr2army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(plr2==33){
          if(plr2!=army||plr2!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                plr2army=plr2army+1;
            }else{
                if(plr2==army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        plr2army=plr2army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(plr2==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        plr2army=plr2army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(plr2==34){
          if(plr2!=army||plr2!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                plr2army=plr2army+1;
            }else{
                if(plr2==army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        plr2army=plr2army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(plr2==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        plr2army=plr2army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(plr2==35){
          if(plr2!=army||plr2!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                plr2army=plr2army+1;
            }else{
                if(plr2==army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        plr2army=plr2army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(plr2==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        plr2army=plr2army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(plr2==36){
          if(plr2!=army||plr2!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                plr2army=plr2army+1;
            }else{
                if(plr2==army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        plr2army=plr2army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(plr2==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        plr2army=plr2army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(plr2==37){
          if(plr2!=army||plr2!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                plr2army=plr2army+1;
            }else{
                if(plr2==army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        plr2army=plr2army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(plr2==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        plr2army=plr2army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(plr2==38){
          if(plr2!=army||plr2!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                plr2army=plr2army+1;
            }else{
                if(plr2==army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        plr2army=plr2army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(plr2==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        plr2army=plr2army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(plr2==39){
          if(plr2!=army||plr2!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                plr2army=plr2army+1;
            }else{
                if(plr2==army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        plr2army=plr2army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(plr2==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        plr2army=plr2army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(plr2==40){
          if(plr2!=army||plr2!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                plr2army=plr2army+1;
            }else{
                if(plr2==army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        plr2army=plr2army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(plr2==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        plr2army=plr2army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(plr2==41){
          if(plr2!=army||plr2!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                plr2army=plr2army+1;
            }else{
                if(plr2==army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        plr2army=plr2army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(plr2==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        plr2army=plr2army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }else if(plr2==42){
          if(plr2!=army||plr2!=plr3army){
                cout<<"You have successfully conquered Alberta!"<<endl;
                cout<<"You are rewarded 1 new territory!"<<endl;
                plr2army=plr2army+1;
            }else{
                if(plr2==army){
                    cout<<"You and Player 2 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 2! You have conquered "<<output2<<endl;
                        plr2army=plr2army+1;
                        plr2size=plr2size-(army/3);
                    }else{
                        cout<<"Player 2 has defeated you! You lose"<<plr2size/3<<"soldiers!"<<endl;
                        army=army-(plr2size/3);
                        plr2size=plr2size+1;
                    }
                } else if(plr2==plr3army){
                    cout<<"You and Player 3 are fighting!"<<endl;
                    rolldie=rand()%6;
                    if(rolldie>rolldie2){
                        cout<<"You beat Player 3! You have conquered "<<output3<<endl;
                        plr2army=plr2army+1;
                        plr3size=plr3size-(army/3);
                    }else{
                        cout<<"Player 3 has defeated you! You lose"<<plr3size/3<<"soldiers!"<<endl;
                        army=army-(plr3size/3);
                        plr3size=plr3size+1;
                    }
                }
            }
      }
    }
    //Exit
    cout<<"You have 100 troops! You win the game!"<<endl;
    return 0;
}
