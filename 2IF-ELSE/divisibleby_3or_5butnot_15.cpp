#include<iostream>

using namespace std;
int main(){
    int p;
    cout<<"ent an integer";
    cin>>p;
    if((p%3==0 || p%5==0)&&(p%15!=0))
    cout<<"no is valid";
    else
    cout<<"num is not valid";
}