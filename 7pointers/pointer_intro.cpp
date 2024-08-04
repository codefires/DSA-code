#include <iostream>
using namespace std;

int main(){
    int x=4;
    int* p=&x;
    // int *p=&x;
    bool y=true;
    bool* q=&y;
    cout<<&x<<endl;
    cout<<p<<endl;
     cout<<&y<<endl;
    cout<<q<<endl;
    cout<<"value ofx="<<*p<<endl;
    cout<<"value of y="<<*q<<endl;

}