#include <iostream>
using namespace std;
int find(int a,int *b,int *c){
    *c=a%10;
    
    while(a>9){
        a=a/10;
    }
    *b=a;                                
    return *b,*c; //find first and last digit by function and pointer
}

int main(){
    int n;
    cout<<"enter no";
    cin>>n;
    int firstdigit,lastdigit;
    int *ptr1=&firstdigit;
    int *ptr2=&lastdigit;
    find(n,ptr1,ptr2);
    cout<<firstdigit<<" "<<lastdigit;
}