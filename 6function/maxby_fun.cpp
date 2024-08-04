#include<iostream>
using namespace std;
int max(int a,int b,int c){
    // int max;
    if(a>b && a>c)
    // max=a;
    return a;
    else if(b>c && b>a)
        // max=b;
        return b;
    else 
    // max=c; 
    return c;
    // return max;

}

int main(){
    int a,b,c;
    cout<<"enter three no";
    cin>>a>>b>>c;
    cout<<"max among three is :"<<max(a,b,c);
}