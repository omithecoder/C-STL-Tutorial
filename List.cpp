#include<iostream>
#include<list>
using namespace std;


int main()
{
    // List is nothing but a doubly linked list like data structure here we cannot access any node using .at() since this is list so to iterate ith node we should travese till ith node this contain all the properties of doubly ended linked list
    list<int> l;
    l.push_front(0);
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);

    cout<<"Elements in list => ";
    for(int n:l)
    {
        cout<<n<<" ";
    }
    // number 0 get popped
    l.pop_front();
    // number 3 get popped
    l.pop_back();
    cout<<"\nElements in list after popping => ";
    for(int n:l)
    {
        cout<<n<<" ";
    }

    cout<<"\nList size => "<<l.size();
    cout<<"\nIs Empty => "<<l.empty();


    // to copy one list to another
    list <int> n(l);
    cout<<"\nCopied list => ";
    for(int s:n)
    {
        cout<<s<<" ";
    }


    // Initialise complete list with any number i
    list <int> li(5,10); //initialise 5 nodes of the list with number 10
    cout<<"\nList all elements are initialised with 10 => ";
    for(int s:li)
    {
        cout<<s<<" ";
    }
    

}