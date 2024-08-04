#include<iostream>
using namespace std;
int main(){
    int n;
   { int i,a=1;
    cout<<"enter term of GP";
    cin>>n;
    for(i=1;i<=n;i++){
        cout<<a<<" ";
        a*=2;                  //GP=1,2,4,8,16.....n;

    }
   }
    cout<<"another GP for same term\n";
    int a=2;
      for( int i=1;i<=n;i++){
        cout<<a<<" ";
        a*=3;                  //GP=2,6,18,54....

    }
    
}