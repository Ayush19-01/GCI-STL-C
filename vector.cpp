#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> x;
    x.push_back(23);
    x.push_back(34);
    x.push_back(62);
    x.push_back(49);
    x.push_back(25);
    cout<<"The following is a vector with int values : ";
    for(vector<int>::iterator j = x.begin(); j != x.end(); j++) 
    {   
          cout << *j <<" ";   
    }
    x.pop_back();
    cout<<"\n\n";
    cout<<"Vector after popping the last element:";
    for(vector<int>::iterator j = x.begin(); j != x.end(); j++) 
    {   
          cout << *j <<" ";   
    }
    int z=x.front();
    cout<<"\n\nThe first element of vector:";
    cout<<z;
    int y=x.back();
    cout<<"\n\nThe last element of vector:";
    cout<<y;
    	
    
}

