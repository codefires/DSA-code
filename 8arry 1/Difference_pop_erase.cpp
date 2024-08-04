//here we know difference between pop and erase function
//but you should know about erase function from 'vector_EraseMethod'
#include<iostream>
#include<vector>
using namespace std;
//The erase function is used to remove elements from a specified range
// or a specific position in the vector

//The pop_back function is specifically used to remove
// the last element of the vector.
int main(){
vector<int> v1;
v1.push_back(5);
v1.push_back(6);
v1.push_back(7);

v1.push_back(8);
v1.push_back(9);
for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<" ";
}
cout<<endl;
v1.pop_back();
for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<" ";
}
}