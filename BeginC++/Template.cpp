#include<iostream>
#include<stdlib.h>
using namespace std;

template <class T>

int add(T a, T b)
{

	T c = a+b;
cout<<"The value of c :"<<c<<endl;
cout<<"Working for both  int and float"<<endl;
return c;
}
int main()
{
 add(1,3);
 add(1.2 ,3.4);
 //cout<<c;

return 0;
}


