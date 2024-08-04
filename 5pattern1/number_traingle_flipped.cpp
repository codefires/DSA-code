#include<iostream>
using namespace std;

int main(){
    int i,j,k,n;
    cout<<"enter no. of row";
    cin>>n;
    for(i=0;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(k=1;k<=i;k++){
            cout<<k;
        }
        cout<<endl;
    }
}