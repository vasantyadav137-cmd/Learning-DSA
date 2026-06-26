#include <iostream>
#include <queue>
#include <deque>
using namespace std;
int main()
{
    deque<int> dq = {9, 6, 5};

    dq.push_back(1);
    dq.push_front(1);
    dq.pop_back();
    dq.pop_front();
    for (int i : dq)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << dq.size() << endl;
    queue<int> q;
    q.push(1);

    q.pop();

    for (int i : q)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << q.size() << endl;

    return 0;
}