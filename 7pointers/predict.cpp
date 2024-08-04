#include <iostream>
using namespace std;

int main(){
    int a=4;
    int *p=&a;
    // int b=++(*p);
    // cout<<a<<" "<<b;

     int b=(*p)++;
    cout<<a<<" "<<b;
}