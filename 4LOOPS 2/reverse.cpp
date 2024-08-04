#include<iostream>
using namespace std;

int main(){
    int n;
    int reverse=0;
    cout<<"enter number";
    cin>>n;
    int lastdigit=0;
    
    while(n!=0){
            reverse*=10;
        lastdigit=n%10;
    reverse=reverse+lastdigit;

        n=n/10;
    }
    cout<<reverse;
}