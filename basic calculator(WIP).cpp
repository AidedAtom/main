#include<iostream>
#include<windows.h>
#include<time.h>
#include<cmath>;
using namespace std;

int factoriel(int x);
int root(int x, int y);
bool bol;

int main(){
cout<<"Basic calculator"<<endl;
cout<<"current functions: + - * / ^ root"<<endl;
int a, b, c, d = 0;
string mode = "";
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
for(int i = 0; i<100; i++){
cin>>a;
cin>>mode;
if(mode=="+"){
    cin>>b;
    cout<<a+b<<endl;
}else if(mode == "-"){
    cin>>b;
    cout<<a-b<<endl;
}else if(mode == "*"){
    cin>>b;
    cout<<a*b<<endl;
}else if(mode == "/"){
    cin>>b;
    cout<<a/b<<endl;
}
else if(mode == "!"){
    cout<<factoriel(a)<<endl;
}else if(mode == "^"){
    cin>>b;
    cout<<pow(a, b)<<endl;
}else if(mode == "root"){
    cin>>b;
    root(a, b);
    if(bol == 1){
        cout<<root(a, b)<<endl;
    }
    bol = 0;
}
}

    return 0;
}

int factoriel(int x){

    for(int i = x-1; i>0; i--){
        x*=i;
    }
    return x;
}

int root(int x, int y){
    for(int i = 0; i<=sqrt(y); i++){
        if(i*i==y){
            bol = 1;
            return i;
        }
    }
    cout<<"No whole numbered root"<<endl;
}
