#include<iostream>
using namespace std;

int main(){
    int arr[]={2,3,4,5,6,7,8,9,10,11,12,13,14};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
int brr[][1]={4,5,6,7};
int p=sizeof(brr)/sizeof(brr[0][0]);
cout<<p;
}