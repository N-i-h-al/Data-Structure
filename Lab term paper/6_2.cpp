#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        dq.push_back(m);
    }

    deque<int> que;
    while (!dq.empty())
    {
        if (dq.front() > dq.back())
        {
            que.push_back(dq.back());
            dq.pop_back();
        }
        else
        {
            que.push_back(dq.front());
            dq.pop_front();
        }
    }

    for (auto tv : que)
    {
        cout << tv << " ";
    }

    return 0;
}
