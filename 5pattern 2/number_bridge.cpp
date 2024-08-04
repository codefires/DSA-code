#include<iostream>
using namespace std;

int main(){
    int i,j,k,n;

    cout<<"enter no. of row";
     cin>>n;
     int m=n-1;
     for(i=1;i<=2*n-1;i++){
        cout<<i;
     }
     cout<<endl;
    for(i=1;i<=m;i++){
            int a=1;
        for(j=1;j<=m+1-i;j++){
            cout<<a;
            a++;
        }
        
        for(k=1;k<=2*i-1;k++){
            cout<<" ";
            a++; 
        }
        for(k=1;k<=m +1-i;k++){
            cout<<a;
            a++;
        }
    
        cout<<endl;
    }
}