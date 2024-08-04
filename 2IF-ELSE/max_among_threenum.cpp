#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter 1st num";
    cin>>a;
        cout<<"enter 2nd num";
    cin>>b;
    cout<<"enter 3rd num";
    cin>>c;
    if(a>b&&a>c)
    cout<<a<<": is maximum no.";
    else if(b>a&&b>c)
    cout<<b<<" : is maximum no.";

    else if(c>a&&c>b)
    cout<<c<<": is maximum no.";
    else
    cout<<"invlaid";


}