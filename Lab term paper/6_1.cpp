#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq;
    int m,n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>m;
        dq.push_back(m);
    }

    int lar_val = dq.front();

    for (auto it : dq)
    {
        lar_val = max(lar_val, it);
    }

    vector<int> cnt(lar_val + 1);

    for (auto yt : dq)
    {
        cnt[yt]++;
    }

    deque<int> sorted_dq;

    for (int i = 0; i <= lar_val; i++)
    {
        for (int j = 0; j < cnt[i]; j++)
        {
            sorted_dq.push_back(i);
        }
    }


    for (auto tv : sorted_dq)
    {
        cout << tv << " ";
    }
    return 0;
}
