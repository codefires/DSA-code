#include<iostream>
using namespace std;

int main(){
    int i,j,k,m,n;
    cout<<"enter no. of row";
    cin>>n;
    for(i=0;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(k=1;k<=i;k++){
            cout<<k;
        }
        for(m=i-1;m>=1;m--){
            cout<<m;
        }
        cout<<endl;
    }
}