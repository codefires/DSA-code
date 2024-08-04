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
    int x;
    bool flag=true;
cout<<"enter element which you want to search";
cin>>x;
  for(int i=0;i<5;i++){
    if(arr[i]==x)
    flag=false;

    }
if(flag==true)
cout<<"elemet not present";
else
cout<<"element present";
 
}