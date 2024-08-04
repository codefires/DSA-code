#include<iostream>
using namespace std;

int main(){
    int n;
    int i;
  cout<<"enter no";
  cin>>n; 
  bool flag=true;
    for(i=2;i<=n-1;i++){

if(n%i==0)
flag=false;

break;
    }
    if(n==1||n==0)
    cout<<"no is not prime nor compoesite";
    else if(flag==true)
    cout<<"no is prime";
    else
    cout<<"no is composite";
}