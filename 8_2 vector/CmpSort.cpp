#include <iostream>  
#include <vector>  
#include <algorithm>     
using namespace std;  
   
//please look 'SortinVector_allMethod'

// return whether first element is greater than the second  
bool cmp(int elem1, int elem2)  
{    return elem1 > elem2;    }  
   
int main()  
{  
  vector <int> vec1={ 1, 7, 5, 4, 6, 12 };  // container  
   
  cout <<"Original random shuffle vector vec1 data:\n";  
  for(int i=0;i<vec1.size();i++) cout<<vec1[i]<<" ";
  cout <<endl;  

  sort(vec1.begin(), vec1.end());  
  cout <<"\nSorted vector vec1 data:\n";  
    for(int i=0;i<vec1.size();i++) cout<<vec1[i]<<" ";
    
  cout <<endl; 

  // to sort in descending order, specify binary predicate  
  sort(vec1.begin(), vec1.end(), greater<int>());  
  cout <<"\nRe sorted (greater) vector vec1 data:\n";  
   for(int i=0;i<vec1.size();i++) cout<<vec1[i]<<" ";


  cout <<endl;  

  // a user-defined binary predicate can also be used  
  sort(vec1.begin(), vec1.end(), cmp);  
  cout <<"\nUser defined re sorted vector vec1 data:\n";  
   for(int i=0;i<vec1.size();i++) cout<<vec1[i]<<" ";
  
  cout <<endl;  
 
}  