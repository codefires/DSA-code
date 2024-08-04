#include<iostream>
using namespace std;
#define pi 3.14 /*This line defines a macro named PI with the value of π to a high precision. Any occurrence of PI in the code will be replaced by 3.14159265358979323846 by the preprocessor before compilation.*/
                 /*The macro is used in the code for modular arithmetic, which is a common practice in competitive programming and algorithm design to prevent integer overflow and ensure results fit within standard data types like int or long long.*/
int area(int r){
    return pi * r * r;
}
int main(){
    int n;
    cout<<"enter radious of circle";
    cin>>n;
    cout<<"area of circle: "<<area(n)<<endl;
}