#include<iostream>
using namespace std;

#include<array>
#include<vector>
#include<deque>
#include<list>
#include<stack>

void display(deque <int> v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
    }
}
void display(list <int> v)
{
    for(int i : v)
    {
        cout<<i;
    }
}


int main()
{

    // ARRAY

    // array<int,4> a={1,2,3,4};
    // for(int i=0;i<a.size();i++)
    // {
    //     cout<<a[i]<<endl;
    // }
    // cout<<"\nElement at second index = "<<a.at(2);
    // cout<<"\nThe array is empty or not = "<<a.empty();
    // cout<<"\nThe first element or array = "<<a.front();
    // cout<<"\nThe size of array = "<<a.size();
    // all operations are of time complexity = O[1] constant


    // VECTOR 

    // vector <int> v;
    // vector <int> newvec(5,1);
    // cout<<"\nCapacity of vector = "<<v.capacity();
    // cout<<"\nSize of vector = "<<v.size();

    // v.push_back(1);
    // v.push_back(2);
    // cout<<"\nCapacity of vector = "<<v.capacity();
    // cout<<"\nSize of vector = "<<v.size();
    // v.push_back(3);
    // cout<<"\nCapacity of vector = "<<v.capacity();
    // cout<<"\nSize of vector = "<<v.size();
    // v.push_back(5);
    // cout<<"\nCapacity of vector = "<<v.capacity();
    // cout<<"\nSize of vector = "<<v.size();
    // v.push_back(10);
    // cout<<"\nCapacity of vector = "<<v.capacity();
    // cout<<"\nSize of vector = "<<v.size();


    // cout<<"\nElement at index 3 = "<<v.at(3);
    // cout<<"\nFirst element = "<<v.front();
    // cout<<"\nLast element = "<<v.back();

    // v.pop_back();
    // cout<<"\nLast element = "<<v.back();
    // cout<<"\nsize of vector = "<<v.size();
    // v.clear();
    // cout<<"\nsize after clearing vector = "<<v.size()<<endl;

    // for(int i=0;i<newvec.size();i++)
    // {
    //     cout<<newvec.at(i);
    // }

    // vector <int> lastvec(newvec);
    // for(int i=0;i<newvec.size();i++)
    // {
    //     cout<<lastvec.at(i);
    // }




    // Dequeue

//     deque <int> a;
//     a.push_front(1);
//     a.push_back(2);
//     a.push_front(3);

//     display(a);
//     a.pop_back();
//     cout<<endl;
//     display(a);
//     a.pop_front();
//     cout<<endl;
//     display(a);


//     cout<<"\nIs Empty "<<a.empty();
//     a.pop_back();
//     display(a);
//     cout<<"\nIs Empty "<<a.empty()<<endl;
//     a.push_back(1);
//     a.push_back(2);
//     a.push_back(3);
//     a.push_back(4);
//     a.push_back(5);
//     display(a);
//     cout<<endl;
//     a.erase(a.begin()+1,a.begin()+3);
// // erase [a,b) a to b erase
//     display(a);






// List 
        // list <int> l1;
        // l1.push_front(1);
        // l1.push_front(2);
        // l1.push_front(3);

        // display(l1);
        // cout<<"\nsize of List : "<<l1.size();
        // list <int> l2(5,100);
        // cout<<endl;
        // display(l2);




        // Stack
        stack<string> s1;
        s1.push("Omkar");
        s1.push("Soham");
        s1.push("Nandana");
        s1.push("Sunil");
        cout<<"\n"<<s1.top();
        



    









}