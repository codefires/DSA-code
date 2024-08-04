#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"enter month 1to 12"<<endl;
    cin>>x;
    // switch(month){
    //     case 1:cout<<"jan 31 days";
    //     break;
    //     case 2:cout<<"feb 28 days";
    //     break;
    //     case 3:cout<<"march 31 days";
    //     break;
    //     case 4:cout<<"april 30 days";
    //     break;
    //     case 5:cout<<"may 31 days";
    //     break;
    //     case 6:cout<<"jun 30 days";
    //     break;
    //     case 7:cout<<"july 31 days";
    //     break;
    //     case 8:cout<<" aug 31 days";
    //     break;
    //     case 9:cout<<" sep 30 days";
    //     break;

    //     case 10:cout<<" oct 31 days";
    //     break;
    //     case 11:cout<<"nov 30 days";
    //     break;
    //     case 12:cout<<" dec 31 days";
    //     break;
    //     default:cout<<"not any month";
    // }
    switch((x%2!=0 && x<=7 )|| (x%2==0 && x>7)){
        case 1:cout<<"31";
      
    }
    switch (x==4 || x==6 || x==9 || x==11){
        case 1:cout<<"30";
    }
   
   switch (x){
    case 2:cout<<"28";
   }
    }
