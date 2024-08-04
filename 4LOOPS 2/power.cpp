#include<iostream>
using namespace std;

int main(){
    int i,a,b;
     int n;   
     float power=1;       
             
    cout<<"enter base"; 
    cin>>a;
    cout<<"enter power";
    cin>>b;
       bool flag=true;
   

    if(b<0){
        flag=false;
        b=-b;
         
    }
    for(i=1;i<=b;i++){
        power=power*a;
    }
  
    if(a==0  && b==0){
    cout<<"undifined";
    }
    else if(flag==false){
        power=1/power;
          cout<<power;

    }
    else
       cout<<power;
    
    
    
      
}