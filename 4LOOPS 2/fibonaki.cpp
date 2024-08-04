#include<iostream>
using namespace std;

int main(){
    int i,n,sum=0;
    int a=1,b=1;
    cout<<" enter no";
    cin>>n;
 cout<<a<<" "<<b<<" ";
    for(i=3;i<=n;i++){
        sum=a+b;
        a=b;
        b=sum;
         cout<<sum<<" ";
    }


}