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
    int smax=arr[0];
  for(int i=1;i<5;i++){
    if(smax<arr[i] && arr[i]!=max)
    smax=arr[i];
    

    }
cout<<"maximum element is"<<max<<endl;
cout<<" second maximum element is"<<smax<<endl;
 
}