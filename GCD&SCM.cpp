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
    while(1){
    cin>>a>>b;
    int NOD = nod(a, b);
    cout<<"GCD = "<<NOD<<endl;
    cout<<"SCM = "<<a*b/NOD<<endl;
    }
    return 0;
}
