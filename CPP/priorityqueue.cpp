#include <bits/stdc++.h>

using namespace std;

int main()
{
    priority_queue<int> pq;

    pq.push(4);
    pq.push(5);
    pq.push(6);
    //pq.pop(5);

    cout << "Top:" << pq.top() << endl;
    cout << pq.size() << endl;
    cout << "PQueue:" << endl;
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
}
