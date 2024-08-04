#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[]={1,4,5,8};
    int n1=sizeof(arr)/sizeof(arr[0]);
    // vector<int> v(n1);
    // for(int i=0;i<n1;i++){
    //     v[i]=arr[i];
    // }
    //  for(int i=0;i<n1;i++){
    //     cout<<v[i]<<" ";
    // }

    //m2
    vector<int> v(arr,arr+n1);
    for(int i=0;i<n1;i++){
        cout<<v[i]<<" ";
    }
}