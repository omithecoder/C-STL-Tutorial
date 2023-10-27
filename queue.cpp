#include<iostream>
#include<queue>
using namespace std;

// First in first out concept for queue

int main()
{
queue<string> q;
q.push("Omkar");
q.push("Soham");
q.push("Nandana");
q.push("Sunil");

cout<<"\nFirst Element = "<<q.front();
q.pop();
cout<<"\nFirst Element = "<<q.front();

// All operation time complexity = O(1)

}