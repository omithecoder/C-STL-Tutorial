#include<iostream>
#include<deque>

using namespace std;

int main()
{
    // Deque is nothing but doubly ended queue here we can do multiple push or pop operation from both ends of the queue this deque is a complex data structure in which arrays are created dynamically and memory allocation also get dynamically

    deque <int> d;
    // Push from backside
    d.push_back(1);
    // Push from frontside
    d.push_front(0);
    //  queue contain [0,1]
    d.push_front(3);
    d.push_back(4);
    cout<<"\nQueue before pop :";
    for(int i=0;i<d.size();i++)
    {
        cout<<d.at(i)<<" ";
    }
    d.pop_back();
    // pop from back as well as front 
    d.pop_front();
    cout<<"\nQueue before pop :";
for(int i=0;i<d.size();i++)
    {
        cout<<d.at(i)<<" ";
    }

    cout<<"\ndeque [front,rare] => ";
    for(int i=0;i<d.size();i++)
    {
        cout<<d.at(i)<<" ";
    }

    cout<<"\nEmpty or Not Empty => "<<d.empty();
    cout<<"\nFront Of queue => "<<d.front();
    cout<<"\nBack Of queue => "<<d.back();

    cout<<"\nDeque size (Before Erase) => "<<d.size();
    // erase function req  parameters one is starting index & ending index till you want to erase the data
    d.erase(d.begin(),d.end());
    cout<<"\nDeque size (After Erase) => "<<d.size();


}