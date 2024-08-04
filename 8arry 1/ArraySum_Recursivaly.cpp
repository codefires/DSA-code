#include<iostream>
using namespace std;
int ArraySum_Recursive(int arr[],int Idx,int sum){
    sum +=arr[Idx];
    if(Idx==4) return sum;
    return ArraySum_Recursive(arr,Idx + 1,sum);
}
int main()
{
 int arr[5]={0,0,1,-2,0};
 int sum=0;

 cout<<ArraySum_Recursive(arr,0,0)<<endl;
}