# GCI-STL-C++
 
## What are STL in C++

The Standard Template Library (STL) is a set of C++ template classes to provide common programming data structures and functions
such as lists, stacks, maps etc. It is a library of container classes, algorithms, and iterators. A working knowledge of template
classes is a prerequisite for working with STL.

The STL achieves its results through the use of templates. This approach provides compile-time polymorphism that is often more 
efficient than traditional run-time polymorphism. Modern C++ compilers are tuned to minimize abstraction penalties arising from
heavy use of the STL.

There are four types of STL in C++:

   1) Containers
       
   2) Algorithms
       
   3) Functions
       
   4) Iterators
   
### Some Standard Template Library (STL) are briefly described below:

## 1. Stack :

Stack is a linear data structure which follows a particular order in which the operations are performed.
The order may be LIFO(Last In First Out) or FILO(First In Last Out).

![alt text](https://github.com/Ayush19-01/GCI-STL-C/blob/master/images/stack_representation.jpg)
 
 There are many real-life examples of a stack. Consider an example of a stack of books. The book which is at the top is removed
 first and then the next and next till the last book is left to removed. So, it can be simply seen to follow LIFO/FILO order.
 
 ___Here are some importrant functions that can be implemented on a stack:___
 
a) empty() – Returns whether the stack is empty
       
       usage: stackname.empty()
       
b) size() – Returns the size of the stack

       usage: stackname.size()
       
c) push(value) – Adds an element at the top of the stack 

       usage: stackname.push(value_to_be_inserted)
       
       
d) pop - Deletes the topmost element of the stack   

       usage:stackname.pop()
       
## 2. Lists :

A Lists is a sequence containers that can be used to store multiple pieces of information at once.It can also be defined as a 
variable containing multiple other variables.As compared to vector, list has slow traversal, but once a position has been 
found, insertion and deletion are quick. 

___Here are some importrant functions that can be implemented on a list:___
 
a) push_front(value) – Adds a new element at the beginning of the list .
       
       usage: listname.push_front(value)
       
b) push_back(value) – Adds a new element  at the end of the list.

       usage: listname.push_back(value)
       
c) reverse() – Reverses the list.

       usage: listname.reverse()

d) sort() – Sorts the list in increasing order.   

       usage: listname.sort()
       
## 3. Vectors :  

Vectors are same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with
their storage being handled automatically by the container. Vector elements are placed in contiguous storage so that they can
be accessed and traversed using iterators. In vectors, data is inserted at the end.
 
![alt text](https://github.com/Ayush19-01/GCI-STL-C/blob/master/images/push_back%20working.png)

___Here are some importrant functions that can be implemented on a vector:___

a) push_back() - Used for inserting an element at the end of the vector
       
       usage: vectorname.push_back(value)
       
b) insert() - Inserts the element in vector before the position pointed by iterator itr.

       usage: vectorname.insert(iteration,value)
       
c) pop_back() - Used to remove the last element from the vector. It reduces the size of the vector by one

       usage: vectorname.pop_back()
       

## 4. Map : 

Maps are associative containers that store elements in a mapped fashion. Each element has a key value and a mapped value.
No two mapped values can have same key values.

![alt text](https://github.com/Ayush19-01/GCI-STL-C/blob/master/images/map-example.png)

___Here are some importrant functions that can be implemented on a map:___

a) max_size() – Returns the maximum number of elements that the map can hold
       
       usage: mapname.max_size()
       
b) pair insert(keyvalue, mapvalue) – Adds a new element to the map

       usage: iterator mapname.insert({key, element})
       
c) erase(const value)– Removes the key value pair from the map

       usage: mapname.erase(key)

## 5. Set : 

Sets are a type of associative containers in which each element has to be unique, because the value of the element 
identifies it. The value of the element cannot be modified once it is added to the set, hence immutable, though it is possible to remove 
and add the modified value of that element.

___Here are some importrant functions that can be implemented on a set:___

a) max_size() – Returns the maximum number of elements that the set can hold
       
       usage: setname.max_size()
       
b) size() – Returns the number of elements in the set.

       usage: setname.size()
       
c) empty() – Returns whether the set is empty. returns boolean value

       usage: setname.empty()
       

## 6. Queue : 

A Queue is a linear structure which follows a particular order in which the operations are performed. The order is First In
First Out (FIFO). An example can be a line in front ofbilling counter, the person who is standing at first get the billing
done first.The difference between stacks and queues is in removing. In a stack we remove the item the most recently added; 
in a queue, we remove the item the least recently added.

![alt text](https://github.com/Ayush19-01/GCI-STL-C/blob/master/images/Queue.png)

___Here are some importrant functions that can be implemented on a set:___

a) push() - Adds an element at the end of the queue.
       
       usage: queuename.push(value)
       
b )pop() - Deletes the first element of the queue.

       usage: queuenamename.pop()
       
c) size() – Returns the size of the queue

       usage: queuename.size()

### Thanks for reading!
       
 
 


