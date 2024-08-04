#include<iostream>
using namespace std;

int main(){
    int x=6;
    int *ptr=&x;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<x<<endl;
    *ptr=9;
    cout<<x<<endl;
}