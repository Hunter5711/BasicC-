/*Double ended queues are sequence containers with the feature of expansion and contraction on both the ends. 
They are similar to vectors, but are more efficient in case of insertion and deletion of elements at the end, 
and also the beginning. Unlike vectors, contiguous storage allocation may not be guaranteed.
The functions for deque are same as vector, with an addition of push and pop operations for both front and back.*/


#include<iostream>
#include<deque>
using namespace std ;

void printDq(deque<int>d)
{
    cout<<"The deque Elements are"<<endl;
    for (int i=0;i<d.size();i++)
    {
       
        cout<<d[i]<<"\t";
    }
    cout<<endl;
}
int main()
{
deque<int > dq;
dq.push_front(5);
dq.push_front(7);
dq.push_front(11);
dq.push_back(19);
dq.push_back(4);
printDq(dq);
cout<<"dq.size()"<<dq.size()<<endl;
cout<<"dq.max_size()"<<dq.max_size()<<endl;
cout<<"dq.at(2)"<<dq.at(2)<<endl;
cout<<"pop_front"<<endl;
dq.pop_front();
cout<<"pop_back"<<endl;
dq.pop_back();
printDq(dq);
cout<<"So its Working yeah!!!!"

}