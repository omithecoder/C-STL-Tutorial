#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<int, string> m;
    m[1]="Monday";
    m[3]="Wednesday";
    m[2]="Tuesday";
    m[4]="Thursday";
    m[7]="Sunday";
    m[5]="Friday";
    m[6]="Saturday";

    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    m.insert({0,"Holiday"});
    cout<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    m.erase(0);
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    auto a = m.find(1);
    cout<<&a<<endl;
    auto a1 = m.find(2);
    cout<<&a1<<endl;
    auto a2 = m.find(3);
    cout<<&a2;
}