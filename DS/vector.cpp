#include <iostream>
#include <vector>
 
using namespace std;
int main()
{
    vector<int> myV;
    myV.push_back(3);
    myV.push_back(8);
    myV.push_back(5);
    myV.push_back(19);
    myV.push_back(11);
        cout<<"Vector elements are"<<endl;
        for(unsigned int i =0;i<=myV.size();i++)
        {
            cout<<myV[i]<<"\t";
           
        }
        cout<<endl;
    //to insert an element 
    // myV.insert(myV.begin(), +integer, value)
        myV.insert(myV.begin(),21);
        //this will add 21 at the oth index 
        myV.insert(myV.begin()+4,21);
          //this will add 21 at the 4th index  from begining


        // print the vector after inserting elem.
        for(unsigned int i =0;i<=myV.size();i++)
        {
            cout<<myV[i]<<"\t";
        }
        cout<<endl;
        myV.erase(myV.begin()+2);

        for(unsigned int i =0;i<=myV.size();i++)
        {
            cout<<myV[i]<<"\t";
        }
        cout<<endl;
        cout<<"some more function of vector"<<endl;
        cout<<myV.front()<<"\t";
        cout<<myV.back()<<"\t" ;
        cout<<myV.at(2)<<endl;

        cout<<endl;
        myV.clear();
        cout<<endl;
       if( myV.empty())
       cout<<"Is empty";
       else
       cout<<"is not empty";
       cout<<endl;
       


}