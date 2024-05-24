#include<iostream>
using namespace std;

int nod(int a, int b){
    while(a!=b){
        if(a>b){
            a-=b;
        }else{
            b-=a;
        }
    }
    return a;
}

int main(){
    cout<<"This is a program that calculates Greatest common divider and smallest common multiple(GCD and SCM)"<<endl;
    cout<<"enter in two numbers:"<<endl;
    int a, b;
    int x, y;
    while(1){
    cin>>a>>b;
    cout<<"GCD = "<<nod(a, b);<<endl;
    cout<<"SCM = "<<a*b/nod(a, b)<<endl;
    }
    return 0;
}
