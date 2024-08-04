#include<iostream>
using namespace std;
int main(){
    int arr[5];
  int n;
  cout<<"enter element in arr";
  cin>>n;
    cout<<"give arry elemet"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"arry element"<<endl;
     for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";

    }
    int x;
    cout<<"enter no";
    cin>>x;
    int count=0;
    for(int i=0;i<n;i++){
     if(arr[i]>x)
     count++;
    }
    cout<<"element greater then "<<x<<" in given arry"<<count;

    

    }