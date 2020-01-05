#include <iostream> 
#include <stack> 
using namespace std; 
  
void showstack(stack <int> s) 
{ 
    while (!s.empty()) 
    { 
        cout <<"  "<< s.top(); 
        s.pop(); 
    } 
    cout << '\n'; 
} 
  
int main () 
{ 
    stack <int> st; 
    st.push(11); 
    st.push(43); 
    st.push(67); 
    st.push(87); 
    st.push(93);
	st.push(86); 
  
    cout << "The stack is : "; 
    showstack(st); 
  
    cout << "\nSize of the stack: " << st.size(); 
    cout << "\n\nTopmost element of the stack: " << st.top(); 
  
  
    cout << "\n\nRemoving the topmost element: "; 
    st.pop(); 
    showstack(st); 
  
    return 0; 
} 
