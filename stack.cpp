#include<iostream>
#include<stack>
using namespace std;

int main()
{
    // here stack is same as a stack data structure here we can perform push & pop operations as we know in stack last entered element get out first inshort it follow "Last In First Out" approach
    stack<string> s;

    s.push("Omkar");
    s.push("Soham");
    s.push("RJ");
    s.push("Kumar");

    cout<<"\nStack Top elements : "<<s.top();
    
    // it popped out the last entered element which is Kumar
    s.pop();
    cout<<"\nStack Top elements : "<<s.top();
    cout<<"\nSize of stack : "<<s.size();

    
}