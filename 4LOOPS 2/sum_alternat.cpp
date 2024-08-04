#include<iostream>
using namespace std;

int main(){
    int i,sum=0;
    int n;
    cout<<"enter no.";
    cin>>n;
    for(i=1;i<=n;i++){
        if(i%2!=0)
      sum=sum+i;
        else
         sum=sum-i;
      
    }
            cout<< sum<<" ";

}                                     //print this 1-2+3-4.....n