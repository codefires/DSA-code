#include<iostream>
using namespace std;

int main(){
    int n;
    int i;
  cout<<"enter no";
  cin>>n; 
 
    for(i=1;i<=n;i++){
        if(i%2==0){
            continue;
    //this print odd nol.
        }
      cout<<i<<" ";
        
    }
}
