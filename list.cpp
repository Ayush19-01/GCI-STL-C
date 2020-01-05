#include <iostream> 
#include <list> 
#include <iterator> 
using namespace std; 
void showlist(list <int> g) 
{ 
    list <int> :: iterator it; 
    for(it = g.begin(); it != g.end(); ++it) 
        cout << "  " << *it; 
    cout << '\n'; 
} 
  
int main() 
{ 
  
    list <int> list1, list2; 
  	for (int i = 1; i < 13; ++i) 
    { 
        list1.push_back(i * 4); 
    } 
    cout << "List  is : "; 
    showlist(list1); 

    cout<<"\nThe length of the list is : "<<list1.size();
    
    cout << "\n\nFirst element of the list 1: " << list1.front(); 
    cout << "\n\nLast element of the list 1 : " << list1.back(); 
  
    cout << "\n\nList after removing the first element : "; 
    list1.pop_front(); 
    showlist(list1); 
    
    cout<<"\nThe length of the list is : "<<list1.size();
  
    cout << "\n\nList after removing the last element : "; 
    list1.pop_back(); 
    showlist(list1); 
    
    cout<<"\nThe length of the list is : "<<list1.size();
  
    cout << "\n\nReverse of list 1 : "; 
    list1.reverse(); 
    showlist(list1); 
    

  
    return 0; 
  
} 
