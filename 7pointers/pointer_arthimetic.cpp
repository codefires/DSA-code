#include <iostream>
using namespace std;

int main(){
//     int x=4;
//     int *ptr=&x;
// cout<<ptr<<endl;
// ptr=ptr+1;
// cout<<ptr<<endl;


    int x=4;
    int *ptr=&x;
*ptr=*ptr+1;//(*ptr)++;
cout<<*ptr<<endl;
cout<<ptr<<endl;
ptr=ptr+1;
cout<<*ptr;

}