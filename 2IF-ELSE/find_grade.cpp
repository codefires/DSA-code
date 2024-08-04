#include<iostream>
using namespace std;

int  main(){
    int s;
    cout<<"enter marks:";
    cin>>s;
    if(s>=91)
    cout<<"grade:A";
    else if (s>=71)
    cout<<"grade:B";
    else if(s>=51)
    cout<<"grade:C";
    else if(s<=50)
    cout<<"grade:D";
}