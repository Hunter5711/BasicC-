/*Priority queues are a type of container adaptors, specifically designed such that 
the first element of the queue is the greatest of all elements in the queue.
 
The functions associated with priority queue are:
empty() – Returns whether the queue is empty
size() – Returns the size of the queue
top() – Returns a reference to the top most element of the queue
push(g) – Adds the element ‘g’ at the end of the queue
pop() – Deletes the first element of the queue*/

#include<iostream>
#include<queue>
using namespace std;
void printPq( priority_queue<int>q)
{
    priority_queue<int>pq =q;
    while(!q.empty())
{
    cout<<q.top()<<"\t";
    q.pop();


}
cout<<endl;

}
int main()
{
    priority_queue<int>pq;
    pq.push(12);
    pq.push(18);
    pq.push(13);
    pq.push(21);
    pq.push(17);
    pq.push(45);
printPq(pq);
cout<<"Lets pop some elements"<<endl;
pq.pop();
pq.pop();
cout<<"Again Pritig the PQ"<<endl;
printPq(pq);



return 0;     
}


/*
   Applicaion  of priority Q


Dijkstra’s Shortest Path Algorithm using priority queue: When the graph is stored in the form of adjacency list or matrix, priority queue can be used to extract minimum efficiently when implementing Dijkstra’s algorithm.

Prim’s algorithm: It is used to implement Prim’s Algorithm to store keys of nodes and extract minimum key node at every step.

Data compression : It is used in Huffman codes which is used to compresses data.

        Artificial Intelligenc*/