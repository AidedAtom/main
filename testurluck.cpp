#include<iostream>
#include<windows.h>
#include<cmath>
#include<stdlib.h>
#include<time.h>
using namespace std;



int main(){
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
srand(time(NULL));
double bal = 1.0;
for(int i = 0; i<1000; i++){
int x = rand()%10000;
    if(x==1){
        SetConsoleTextAttribute(hConsole, 4);
        cout<<endl<<endl;
        cout<<"RNGESUS INCARNATE DROP!!!!(0.01%)"<<endl;
        cout<<endl<<endl;
        bal+=1000000000;
    }
    else if(x<=10){
        SetConsoleTextAttribute(hConsole, 11);
        cout<<endl;
        cout<<"CRAZY RARE DROP!(0.1%)"<<endl;
        cout<<endl;
        bal+=10000;
        bal*=2;
    }else if(x<=100){
        SetConsoleTextAttribute(hConsole, 14);
        cout<<"Very Rare Drop!(1%)"<<endl;
        bal+=1000;
    }else if(x<=1000){
        SetConsoleTextAttribute(hConsole, 2);
        cout<<"Rare Drop!(10%)"<<endl;
        bal+=10;
    }else if(x<=5000){
        SetConsoleTextAttribute(hConsole, 8);
        cout<<"common drop(50%)"<<endl;
        bal+=2;
    }
}
    SetConsoleTextAttribute(hConsole, 15);
    cout<<endl<<"Your balance is:"<<endl;
    if(bal<1000000){
    cout<<bal/1000.0<<"k";
    }else if(bal<1000000000){
    cout<<bal/1000000.0<<"M";
    }else{
    cout<<bal/1000000000.0<<"B";
    }
    SetConsoleTextAttribute(hConsole, 0);
    cout<<endl;
    int amogus;
    cin>>amogus;
    return 0;
}
