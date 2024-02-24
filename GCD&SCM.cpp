#include<iostream>
using namespace std;

int NODD;

void nod(int a, int b){
    while(a!=b){
        if(a>b){
            a-=b;
        }else{
            b-=a;
        }
    }
    NODD = a;
}

int main(){
    cout<<"This is a program that calculates Greatest common divider and smallest common multiple(GCD and SCM)"<<endl;
    cout<<"enter in two numbers:"<<endl;
    int a, b;
    int x, y;
    while(1){
    cin>>a>>b;
    x = a;
    y = b;
    nod(a, b);
    cout<<"GCD = "<<NODD<<endl;
    cout<<"SCM = "<<x*y/NODD<<endl;
    }
    return 0;
}
