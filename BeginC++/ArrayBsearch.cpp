#include<iostream>
#include<algorithm>
using namespace std;

void print(int a[] , int asize)
{
cout<<"the array Elements are: "<<endl;
for(int i=0;i<asize;i++)
{

	cout<<"\t"<<a[i];
	//cout<<endl;
}
cout<<endl;

}

int main()
{
	int a[] = {2,41,5,8,1,6,71,21,19,30};
	int key;
	int asize = sizeof(a)/sizeof(a[0]);
	print(a,asize);
	//sorting the array elements
	sort(a,a+10);
cout<<"Array after sorting "<<endl;
print(a, asize);
cout<<endl;
cout<<"Searching a key in array "<<endl;
cout<<"Enter a key to be searched "<<endl;
cin>>key;
if (binary_search(a, a + 10, key)) 
       cout << "\nElement"<<"\t" <<key<<"found in the array"<<endl;
    else
       cout << "\nElement"<<"\t"<<key<<" not found in the arra"<<endl;
return 0;

}



