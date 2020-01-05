#include <iostream> 
#include <iterator> 
#include <map> 
  
using namespace std; 
  
int main() 
{ 
    map<int, int>m1; 
   m1.insert(pair<int, int>(1,52)); 
   m1.insert(pair<int, int>(67,87)); 
   m1.insert(pair<int, int>(43,12)); 
   m1.insert(pair<int, int>(9,45)); 
   m1.insert(pair<int, int>(69, 59)); 
   m1.insert(pair<int, int>(48,21)); 
   m1.insert(pair<int, int>(92,111)); 
   
   map<int, int>::iterator itr; 
   cout << "\nThe map is : \n"; 
   cout << "KEY    Value\n"; 
   for (itr =m1.begin(); itr !=m1.end(); ++itr) { 
        cout << itr->first 
             << "      " << itr->second << '\n'; 
    } 
} 
