#include<iostream>
using namespace std;
int main(){
    int n,arr[n],sum=0;
    cout<<"enter size of arry";
    cin>>n;
    cout<<"give arry elemet"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"sum of arry element"<<endl;
     for(int i=0;i<n;i++){
       sum=sum+arr[i];

    }
    cout<<sum;
}