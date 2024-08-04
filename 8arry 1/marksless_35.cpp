#include<iostream>
using namespace std;

int main(){
    int markd[]={50,24,70,34,12};
    cout<<"marks of student"<<endl;
    for(int i=0;i<=4;i++){
        cout<<markd[i]<<" ";
    }
    cout<<" roll no. of student of marks less then 35"<<endl;
    for(int i=0;i<=4;i++){
        if(markd[i]<35){
            cout<<i<<" ";
        }
    }
}