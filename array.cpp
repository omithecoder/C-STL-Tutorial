#include<iostream>
#include<array> // STL library 

using namespace std;

int main()
{
    int arr[3]={1,2,3};
    array<int, 4> a= {1,2,3,4};
    // STL array is same as normal array or static array 
    array<int, 4> b= {5,6,7,8};
    int size = a.size();
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"\nElement at 2nd Place => "<<a.at(2);
    cout<<"\nArray empty or not => "<<a.empty();
    cout<<"\nFirst element of array => "<<a.front();
    cout<<"\nLast element of array => "<<a.back();
    // use to swap elements in a with b
    a.swap(b);

    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }

    

}