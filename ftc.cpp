///fahrenheit to celcius lmao
#include<iostream>
#include<windows.h>
using namespace std;
int main(){
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

cout<<"Fahrenheit to Celsius calculator"<<endl;

for(int i = 0; i<50; i++){
double f, c;
cin>>f;
SetConsoleTextAttribute(hConsole, 15);
c = (f-32)*0.555556;
cout<<f<<"F = "<<c<<"C"<<endl;
}

    return 0;
}
