#include<iostream>
#include<vector> //STL library
using namespace std;


int main()
{
    // Vector is nothing but a dynamic array whose size is dynamically changes as the number of elements in the array are increasing initially it's size is zero but as elements increases and fill the vetor it generates a new vector whose capacity is double of that initial one and previous vector data is copied into new vector and previous vector get discarded 

    
    vector<int> v;
    // capacity of vector is the total data holding capacity
    //  size of vector is the total number of data elements in the vector
    cout<<"Capacity -> "<<v.capacity()<<endl;
    cout<<"Size -> "<<v.size()<<endl;
    v.push_back(10);
    cout<<"Capacity -> "<<v.capacity()<<endl;
    cout<<"Size -> "<<v.size()<<endl;
    v.push_back(20);
    cout<<"Capacity -> "<<v.capacity()<<endl;
    cout<<"Size -> "<<v.size()<<endl;
    v.push_back(30);
    cout<<"Capacity -> "<<v.capacity()<<endl;
    cout<<"Size -> "<<v.size()<<endl;
    v.push_back(40);
    cout<<"Capacity -> "<<v.capacity()<<endl;
    cout<<"Size -> "<<v.size()<<endl;
    v.push_back(50);
    cout<<"Capacity -> "<<v.capacity()<<endl;
    cout<<"Size -> "<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    cout<<"Front element of vector => "<<v.front()<<endl;
    cout<<"Back element of vector => "<<v.back()<<endl;
    cout<<"Before Pop : "<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v.at(i)<<" ";
    }
    v.pop_back();
    cout<<endl;
    cout<<"After Pop : "<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    cout<<"Before Clear Size : "<<v.size()<<endl;
    v.clear();
    cout<<"After Clear Size : "<<v.size()<<endl;
    // here size changes but capacity remains as it is 

    // Different way of initialisation of vector

    vector<int> newvec(5,1);
    // newvec(size,initialise complete vec with this num)
    cout<<"New Vector Initialise with one "<<endl;
    for(int i=0;i<newvec.size();i++)
    {
        cout<<newvec.at(i)<<" ";
    }

    // if we want to create a duplicate vector 
    vector<int> last(newvec);
    cout<<"Duplica "<<endl;
    for(int i=0;i<last.size();i++)
    {
        cout<<last.at(i)<<" ";
    }


}