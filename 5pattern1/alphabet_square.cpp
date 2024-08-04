#include<iostream>
using namespace std;
int main(){
    int i,j,n,m;
    cout<<"enter no of row and coloum";
    cin>>n;
    
  
    // for(i=1;i<=n;i++){
    //     char ch='A';
    //     for(j=1;j<=n;j++){
    //         cout<<ch<<" ";
    //         ch++;
    //     }
    //     cout<<endl;
    // }
       for(i=1;i<=n;i++){
       
        for(j=1;j<=n;j++){
            cout<<char(j+64)<<" ";
        
        }
        cout<<endl;
    }
}