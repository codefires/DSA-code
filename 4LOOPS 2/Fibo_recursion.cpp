#include<iostream>
using namespace std;
//0 1 1 2 3 5 8
int fibo(int n){
    //here we assume that fibonaci series start from 0 with 0th indx
    if(n==1 || n==0) return n;
    return fibo(n-1) + fibo(n-2);
}
int main()
{
 int n;
 cout<<"enter n";
 cin>>n;
 cout<<fibo(n);

}