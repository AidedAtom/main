#include<iostream>

#include<cmath>
#include<windows.h>
#include<time.h>
#include<cstdlib>
#include<stdlib.h>
using namespace std;

string name = " ";

int blank = 0;
int live = 0;
int ammo();
int health = 3;
int d_health = 3;
void turn1();
bool urturn = 1;
void turn2();
bool over = 0;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
int main(){

srand(time(0));
cout<<"welcome to buckshot roulette(Aided's version)"<<endl;
cout<<"Enter your name: ";
cin>>name;

cout<<"1.Start  2.Rules"<<endl;
string buckshot;
cin>>buckshot;
if(buckshot=="2"||buckshot=="Rules"||buckshot=="rules"||buckshot=="2.Rules"||buckshot=="2.rules"){
    cout<<"When the game starts u will be up against the dealer in a game of buckshot roulette."<<endl;
    cout<<"At the begging of the game it is said how many live bullets and blank bullets will be loaded into a shotgun randomly."<<endl;
    cout<<"You have three choices 1.Shoot the dealer in which case if you hit him with a live he will take 1 damage,"<<endl;
    cout<<"2.Shoot yourself in which case if you hit urself with a blank you can go again next turn"<<endl;
    cout<<"3.Shoot the target which if you hit with a live you regain one live(maxes out at 4)"<<endl;
    cout<<"Thats about it"<<endl<<endl;
}

SetConsoleTextAttribute(hConsole, 14);
cout<<endl<<"The game has started"<<endl<<endl;
Sleep(1000);
blank = ammo();
live = ammo();
SetConsoleTextAttribute(hConsole, 11);
cout<<live<<" live and "<<blank<<" blank bullets"<<endl;
Sleep(500);
while(live>0 || blank>0){
if(urturn==1){
    turn1();
    if(d_health==0){
    cout<<name<<" wins!"<<endl;
    over = 1;
    break;
    }else if(health == 0){
    SetConsoleTextAttribute(hConsole, 4); cout<<"You lost! skill issue tbh"<<endl;
    over = 1;
    break;
}
}else{
    turn2();
    if(d_health==0){
    cout<<name<<" wins!"<<endl;
    over = 1;
    break;
    }else if(health == 0){
    SetConsoleTextAttribute(hConsole, 4); cout<<"You lost! skill issue tbh"<<endl;
    over = 1;
    break;
}
}
}
while(over==0){
    srand(time(0));
    live = ammo();
    blank = ammo();
    SetConsoleTextAttribute(hConsole, 14);
    cout<<endl<<"New round has started"<<endl;
    Sleep(1000);
    SetConsoleTextAttribute(hConsole, 11);
    cout<<"There are "<<live<<" live and "<<blank<<" blank bullets."<<endl<<endl;
    Sleep(500);
    while(live>0 || blank>0){
if(urturn==1){
    turn1();
    if(d_health==0){
    cout<<name<<" wins!"<<endl;
    over = 1;
    break;
}else if(health == 0){
    SetConsoleTextAttribute(hConsole, 4); cout<<"You lost! skill issue tbh"<<endl;
    over = 1;
    break;
}
}else{
    turn2();
    if(d_health==0){
    cout<<name<<" wins!"<<endl;
    over = 1;
    break;
}else if(health == 0){
    SetConsoleTextAttribute(hConsole, 4); cout<<"You lost! skill issue tbh"<<endl;
    over = 1;
    break;
}
}
}
}
SetConsoleTextAttribute(hConsole, 12);
cout<<"Dealer: You really think you can defeat me huh.... Well let me tell you something"<<endl;
Sleep(5000);
cout<<"Dealer: I always come back... "<<endl;
Sleep(3000);
cout<<"Dealer: I have defeated the holy and almighty BOB"<<endl;
Sleep(4000);
cout<<"Dealer: Until we meet again, punk *spits in ur face and walks away*"<<endl<<endl;
Sleep(5000);
SetConsoleTextAttribute(hConsole, 11);
cout<<name<<": The fuck is up with that guy?"<<endl<<endl;
SetConsoleTextAttribute(hConsole, 10);
Sleep(3000);
cout<<"AidedAtom: Don't worry about him... You did good bud, next time you will kill him for good"<<endl<<endl;
Sleep(3000);


 SetConsoleTextAttribute(hConsole, 2);
 cout<<"Credits: "<<endl;
 cout<<"Game created by: AidedAtom"<<endl;
 Sleep(100);
 cout<<"Bug testers: Halflander"<<endl;
 Sleep(100);
 cout<<"original game by: Mike Klubinka"<<endl;
string gg;
cin>>gg;
    return 0;
}

int ammo(){
    int thing = 1+(rand()%4);
    return thing;
}
void turn1(){
    SetConsoleTextAttribute(hConsole, 15);
    cout<<"The shotgun will be handed to you"<<endl; SetConsoleTextAttribute(hConsole, 15);
    Sleep(500);
    cout<<"1.Shoot dealer  "<<"2.shoot self  "<<"3.shoot target for life back"<<endl;
    string e;
    cin>>e;
    cout<<endl;
    if(e=="1"){
        srand(time(0));
        int x = rand()%(blank+live);
        if(x<live){
            SetConsoleTextAttribute(hConsole, 14);
            cout<<"You have shot the dealer dealing one damage"<<endl;
            d_health--;
            SetConsoleTextAttribute(hConsole, 12);
            Sleep(1000);
            cout<<"dealer's lives are now "<<d_health<<endl<<endl;
            urturn = 0;
            live--;
        }else{
            SetConsoleTextAttribute(hConsole, 8);
            cout<<"It was a blank"<<endl<<endl;
            urturn = 0;
            blank--;
        }
    }
    else if(e=="2"){
        srand(time(0));
        int x = rand()%(blank+live);
        if(x<live){
            SetConsoleTextAttribute(hConsole, 4);
            cout<<"You have shot yourself dealing one damage"<<endl;
            health--;
            SetConsoleTextAttribute(hConsole, 12);
            Sleep(1000);
            cout<<"Your lives are now "<<health<<endl<<endl;
            urturn = 0;
            live--;
        }else{
            SetConsoleTextAttribute(hConsole, 14);
            cout<<"You have shot yourself with a blank"<<endl<<endl;
            urturn = 1;
            blank--;
        }
    }
    else if(e=="3"){
        srand(time(0));
        int x = rand()%(blank+live);
        if(x<live){
            if(health<4){
                SetConsoleTextAttribute(hConsole, 14);
                cout<<"You have shot the target with a live and gained a life"<<endl;
                health++;
                SetConsoleTextAttribute(hConsole, 12);
                cout<<"Your lives are now "<<health<<endl<<endl;
                live--;
                urturn = 0;
            }else{
                SetConsoleTextAttribute(hConsole, 15);
                cout<<"u dumbass the limit is 4 lives"<<endl;
            }SetConsoleTextAttribute(hConsole, 4);
        }else{
            SetConsoleTextAttribute(hConsole, 8);
            cout<<"It was a blank"<<endl<<endl;
            blank--;
            urturn = 0;
        }
    }
}
void turn2(){
    SetConsoleTextAttribute(hConsole, 15);
    cout<<"The shotgun will be handed to the dealer"<<endl;
    Sleep(1000);
    srand(time(0));
    int e = rand()%2;
    if(e==1){
        srand(time(0));
        int x = rand()%(blank+live);
        if(x<live){
            SetConsoleTextAttribute(hConsole, 14);
            cout<<"The dealer has shot you dealing one damage"<<endl;
            health--;
            SetConsoleTextAttribute(hConsole, 12);
            Sleep(1000);
            cout<<"Your lives are now "<<health<<endl<<endl;
            urturn = 1;
            live--;
        }else{
            SetConsoleTextAttribute(hConsole, 8);
            cout<<"The dealer has shot you. It was a blank"<<endl<<endl;
            urturn = 1;
            blank--;
        }
    }else if(d_health!=4){
        srand(time(0));
        int x = rand()%(blank+live);
        if(x<live){
            if(d_health<4){
                SetConsoleTextAttribute(hConsole, 14);
                cout<<"The dealer has shot the target with a live giving him one life back"<<endl;
                d_health++;
                SetConsoleTextAttribute(hConsole, 12);
                Sleep(1000);
                cout<<"He now has "<<d_health<<" lives remaining"<<endl<<endl;
            live--;
            urturn = 1;
        }else{
            SetConsoleTextAttribute(hConsole, 8);
            cout<<"The dealer has shot the target with a blank"<<endl<<endl;
            blank--;
            urturn = 1;
        }
    }else{
        srand(time(0));
        int x = rand()%(blank+live);
        if(x<live){
            SetConsoleTextAttribute(hConsole, 14);
            cout<<"The dealer has shot you dealing one damage"<<endl;
            health--;
            SetConsoleTextAttribute(hConsole, 12);
            Sleep(1000);
            cout<<"Your lives are now "<<health<<endl<<endl;
            urturn = 1;
            live--;
        }else{
            SetConsoleTextAttribute(hConsole, 8);
            cout<<"The dealer has shot you. It was a blank"<<endl<<endl;
            urturn = 1;
            blank--;
        }
    }
}
}
