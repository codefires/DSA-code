#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    for(int i=1;i<=2*n-1;i+=2){
        cout<<i<<" ";               // ap is 1,3,5,7,9......
                                     // an=1+(n-1)2
    }
    cout<<"this is another method"<<endl;
    int a=1;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a=a+2;
    }
}