#include<iostream>
#include<vector>
using namespace std;

int main(){
//erase funn me hamere  element   vector we bahar nikal jate h ,ttha vectro ke last me lag jate hai
vector<int> v1;
v1.push_back(5);
v1.push_back(6);
v1.push_back(7);

v1.push_back(8);
v1.push_back(9);
v1.erase(v1.begin());//means first 1 element is erased

for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<" ";
}
cout<<endl;
//after pshing new elemnt ,remaining of perivous v1 will add at start;
v1.push_back(15);
v1.push_back(16);
v1.push_back(17);
for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<" ";
}
cout<<endl;
v1.erase(v1.begin(),v1.begin()+4);//means first 4 element is erased

for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<" ";
}
cout<<endl;
//we also remove element from any specific position

//now our vector is 15,16,17;
v1.erase(v1.begin()+1);//means Erase the element at index 1 (2nd element) 
for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<" ";
}
cout<<endl;
//after pushing up new element;
v1.push_back(20);
v1.push_back(21);
v1.push_back(22);
for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<" ";
}
cout<<endl;
cout<<endl;
//we also erase whole vectro;
v1.erase(v1.begin(),v1.end());
for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<" ";
}
cout<<endl;
v1.push_back(0);
for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<" ";
}
}