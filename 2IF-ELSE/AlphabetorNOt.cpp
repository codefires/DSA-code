#include<iostream>
using namespace std;

int main(){
    char p;
    cout<<"enter charector";
    cin>>p;
    if((p>='A' && p<='Z') || (p>='a'&& p<='z'))
cout<<p<<" : is alphabet";
else
cout<<p<<" is not an alphabet";
}