#include <iostream> 
#include <queue> 
  
using namespace std; 
  
void showq(queue <int> gq) 
{ 
    queue <int> g = gq; 
    while (!g.empty()) 
    { 
        cout <<" "<< g.front(); 
        g.pop(); 
    } 
    cout << '\n'; 
} 
  
int main() 
{ 
    queue <int> q1; 
    q1.push(10); 
    q1.push(20); 
    q1.push(30); 
    q1.push(52);
    q1.push(92);
    cout << "The queue is :"; 
    showq(q1); 
    cout<<"\n\nLast element of queue: "<<q1.back();
    cout<<"\n\nFirst element of queue: "<<q1.front();
    cout<<"\n\nLength of the queue: "<<q1.size();
    cout << "\n\nPopping first element gives: "; 
    q1.pop(); 
    showq(q1); 
  
    return 0; 
} 
