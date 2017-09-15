#include <iostream>
  
using namespace std;
  
int main( ) 
{
	
	cout<<" Un-Buffered err\n";//Un Buffered Standard err
   cerr << "An error occured\n";
	//Buffered  standard err
	cout<<"Buffered err"<<endl;
   clog << "An error occured\n";
 
   return 0;
}
