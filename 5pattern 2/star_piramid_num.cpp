#include<iostream>
using namespace std;

int main(){
    int i,j,k,n;
    int m=1;
    cout<<"enter no. of row";
     cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(k=1;k<=2*i-1;k++){
            cout<<m;
            m++;
        }
        cout<<endl;
    }
}