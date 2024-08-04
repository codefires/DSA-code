#include<iostream>
using namespace std;
int main(){
    int i,j,n,m;
    cout<<"enter no of row ";
    cin>>n;
 
  
    for(i=1;i<=n;i++){
        int k=0;
        for(j=1;j<=i;j++){
          // if((i%2==0 && j%2==0)|| (i%2!=0 && j%2!=0))
          if((i+j)%2==0)
          
          cout<<1;
          else
          cout<<0;
            
        }
        cout<<endl;
    }
}