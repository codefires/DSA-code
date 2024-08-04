#include<iostream>
using namespace std;
int main(){
    int arr[5];
  
    cout<<"give arry elemet"<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"arry element"<<endl;
     for(int i=0;i<5;i++){
      cout<<arr[i]<<" ";

    }
    int max=arr[0];

  for(int i=1;i<5;i++){
    if(max<arr[i])
    max=arr[i];

    }
cout<<"maximum element is"<<max;
 
}