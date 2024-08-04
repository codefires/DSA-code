 #include<iostream>
 using namespace std;

    int main(){
        int x=20;
        int* ptr=&x;
        cout<<x<<endl;
        cout<<*ptr<<endl;
        x=30;
        cout<<x<<endl;
        cout<<*ptr<<endl;
        *ptr=5;
        cout<<x<<endl;
    }