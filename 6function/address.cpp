#include<iostream>
using namespace std;
void fun(int x,int y){
      cout<<"addres of fun x:"<<&x<<endl;
    cout<<"value of  fun x:"<<x<<endl;
      cout<<"addres of  fun y:"<<&y<<endl;
    cout<<"value of  fun y:"<<y<<endl;
    
}


int main(){
    int x=2,y=4;
    cout<<"addres of main x:"<<&x<<endl;
    cout<<"value of main x:"<<x<<endl;
      cout<<"addres of main y:"<<&y<<endl;
    cout<<"value of main y:"<<y<<endl;
    fun(x,y);
}