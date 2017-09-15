/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*You are required to complete below methods*/
/*inserts an element x at 
the back of the queue q */
void push(queue<int> &q,int x)
{
    //Your code here
    q.push(4);
    q.push(7);
    q.push(2);
}
/*pop out the front element 
from the queue q and returns it */
int pop(queue<int> &q)
{
    while(!q.empty())
    {
        q.pop();
    }
   //Your code here
}
/*returns the size of the queue q */
int getSize(queue<int> &q)
{
    //Your code here
    cout<<"size of Q is" <<q.size();
}
/*returns the last element of the queue */
int getBack(queue<int> &q)
{
	cout<<q.back();
}
/*returns the first element of the queue */
int getFront(queue<int> &q)
{
	//Your code here
	cout<<q.front();
}
