#include<iostream>
using namespace std;
 int main(){
    int cp,sp;
    cout<<"enter cost prise :";
    cin>>cp;
    cout<<"enter selling prise:";
    cin>>sp;
    if(cp>sp)
    cout<<"loss and los="<<cp-sp;
    else
    cout<<"porfit and profit ="<<sp-cp;
 }