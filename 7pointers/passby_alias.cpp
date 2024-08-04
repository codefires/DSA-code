#include <iostream>
using namespace std;
void swap(int &x,int &y){
    int tem=x;
    x=y;
    y=tem;
    return;
}

int main(){
    int a,b;
    cout<<"enter both no";
    cin>>a>>b;
    swap(a,b);
    cout<<"after swapint"<<endl;
    cout<<a<<" "<<b;
}