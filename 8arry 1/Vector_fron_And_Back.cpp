#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
 int n;
  cin>>n;
 vector<int> v(n,0);

 for(int i=0;i<v.size();i++) cin>>v[i];
 int x=0,y=0;
while(v.size()){
   x +=max(v.front(),v.back());
   if(v.front() >= v.back())
   v.erase(v.begin());

   else v.pop_back();

    if(v.size()!=0) 
 {   y += max(v.front(),v.back());
   if(v.front() >= v.back())
   v.erase(v.begin());
   else v.pop_back();
   }

 }
 cout<<x-y;
}