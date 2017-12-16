/*Stacks are a type of container adaptors with LIFO(Last In First Out) type of working, where a new element is added at one end and (top) an element is removed from that end only.

The functions associated with stack are:
empty() – Returns whether the stack is empty
size() – Returns the size of the stack
top() – Returns a reference to the top most element of the stack
push(g) – Adds the element ‘g’ at the top of the stack
pop() – Deletes the top most element of the stack*/


#include<iostream>
#include<stack>
using namespace std;


void printStack(stack<int>st)
{
    stack<int>s =st;
      while(!s.empty())
{
   cout<<s.top()<<"\t";
    s.pop();

}
cout<<endl;

}

int main()
{
 stack<int> s;
 s.push(10);
 s.push(7);
 s.push(21);
 s.push(9);
 s.push(14);
 s.push(17);
 s.push(11);
    //pushing some more elements//
 s.push(34);
    s.push(94);
cout<<"Elements in Stack are "<<endl;
printStack(s);
cout<<"Size of stack "<<s.size()<<endl;
cout<<"Lets Pop Elements"<<endl;

s.pop();
s.pop();
s.pop();
cout<<"After poping"<<endl;
printStack(s);
return 0;
}
