#include <iostream>
using namespace std;

int main(){
    int x,y;
    int *p=&x,*q=&y;
    cout<<"enter first no.";
    cin>>*p;
    cout<<"enter second no";
    cin>>*q;
    cout<<"sum="<<*p+*q;

}