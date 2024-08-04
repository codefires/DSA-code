#include<iostream>
using namespace std;
int main(){
    int p,q,r;
    cout<<"enter first side of tranigle";
    cin>>p;
    cout<<"enter second side of tranigle";
    cin>>q;
    cout<<"enter third side of tranigle";
    cin>>r;
    if((p+q>r)&&(q+r>p)&&(p+r>q))
    cout<<"this is a traningle";
    else
    cout<<"this is not an traingle";
}