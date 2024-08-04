#include<iostream>
using namespace std;

int main(){
    int i,j,k,l;
    int n;
    cout<<"enter the no. of row";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(k=1;k<=i;k++){
            cout<<"*";
        }
        for(l=1;l<=i-1;l++){
            cout<<"*";
        }
        cout<<endl;
    }

}