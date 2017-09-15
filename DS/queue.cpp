/*Queues are a type of container adaptors which operate in a first in first out (FIFO) type of arrangement.
 Elements are inserted at the back (end) and are deleted from the front.


The functions supported by queue are :
empty() – Returns whether the queue is empty
size() – Returns the size of the queue
front() – Returns a reference to the first element of the queue
back() – Returns a reference to the last element of the queue
push(g) – Adds the element ‘g’ at the end of the queue
pop() – Deletes the first element of the queue*/

#include<iostream>
#include<queue>

using namespace std;
void PrintQ(queue<int>myQ)
{

    while (!myQ.empty())
    {
        cout << '\t' << myQ.front();
        myQ.pop();
    }
    //cout << '\n';
    cout<<endl;
}


int main()
{
    queue<int>q;
   // q.enqueue(5);   NotWorking
    q.push(4);
    q.push(8);
    q.push(2);
    q.push(9);
    q.push(10);
    q.push(3);
    PrintQ(q);
    cout<<"Q size"<<q.size()<<endl;
   // cout<<"Q maxSize"<<q.max_size()<<endl;
    cout<<"Front element  \t"<<q.front()<<endl;
    cout<<"bakc\t "<<q.back()<<endl;
    cout<<"Lets pop out from Q"<<endl;
    q.pop();
    cout<<endl;
    //cout<<"pop at index 2"<<endl;
    //q.pop(2);  you cant pop any particular value just follow FIFO
    cout<<endl;
    // Again calling PrintQ();
    PrintQ(q);




    return 0;

}