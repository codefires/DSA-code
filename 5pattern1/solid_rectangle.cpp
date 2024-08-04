#include<iostream>
using namespace std;
int main(){
    int i,j,n,m;
    cout<<"enter no of rows";
    cin>>n;
    cout<<"enter no of coloums";
    cin>>m;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            cout<<"x"<<" ";
        }
        cout<<endl;
    }
}