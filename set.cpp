#include<iostream>
#include<set>
using namespace std;


// Set -> this data structure only store unique values if we push same element multiple times in the Set but it only store it ones & one more property of set is that once any element add into the set it never modified we can only delete it here also 2 types of sets are present 
// 1) Ordered Set => In this type of set element returns in sorted order
// 2) Unordered Set => In this type of set element returns in random order


int main()
{
    set<int> s;
    s.insert(5);
    s.insert(15);
    s.insert(15);
    s.insert(15);
    s.insert(95);
    s.insert(0);
    s.insert(0);
    s.insert(0);
    s.insert(1);
    s.insert(78);
    s.insert(-9);

    for(auto it: s)
    {
        cout<<it<<endl;
    }

    // iterator is required here 
    set<int>::iterator it = s.begin();
    it++;
    it++;
    s.erase(it);
    cout<<endl;
    for(auto it: s)
    {
        cout<<it<<endl;
    }

    cout<<"\nIs 25 present => "<<s.count(25);
    cout<<endl;
    set<int>:: iterator itr = s.find(15);
    cout<<&itr;
    cout<<endl;
    set<int>:: iterator itr1 = s.find(78);
    cout<<&itr1;
    cout<<endl;
    cout<<"\nJust grater element than 80 in the set is : ";
    set<int>:: iterator itr2 = s.lower_bound(80);
    cout<<*itr2;

    // Here insert,find,erase and count = O(logN)
    // Other operations like size,empty,begin = O(1)

    
    



    



}