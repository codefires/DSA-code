#include<iostream>
using namespace std;
 int gcf(int a,int b){
    int hcf=1;
    for(int i=min(a,b);i>=1;i--){
        if(a%i==0 && b%i==0){
            hcf=i;
            break;
        }
    }
    return hcf;
 }

int main(){
    int a,b;
    cout<<"enter first no";
    cin>>a;
      cout<<"enter second no";
    cin>>b;
   cout<< gcf(a,b);

}