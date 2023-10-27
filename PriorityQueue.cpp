#include <iostream>
#include <queue>
using namespace std;

// Now we are creating Priority Queue Which is nothing but a heap data structure in this we are creating min heap and max heap both have there own properties:
// Max heap -> Here always first Maximum element Pop Out if we continuolsy pop the content of max heap we get value which are in desending order with respect to there value
// Min heap -> Min heap as per name perform vise versa operation like it always first Pop out smallest element in the queue and if we continuoulsy popping out all elements in the min heap we get list of values which is ordered in asending order w.r.t there values

int main()
{
    // Max heap
    priority_queue<int> Max;
    // Min heap
    priority_queue<int, vector<int>, greater<int> >Min;


    Max.push(2);
    Max.push(5);
    Max.push(3);
    Max.push(4);
    Max.push(1);

    Min.push(2);
    Min.push(5);
    Min.push(3);
    Min.push(4);
    Min.push(1);

    cout<<"\nMax Heap Values : ";
    // Here we get numbers in queue in desending order
    int n=Max.size();
    for(int i=0;i<n;i++)
    {
        cout<<" "<<Max.top();
        Max.pop();
    }
    cout<<"\nMin Heap Values : ";
    // Here we get numbers in queue in asending order 
    int N=Min.size();
    for(int i=0;i<N;i++)
    {
        cout<<" "<<Min.top();
        Min.pop();
    }
}
