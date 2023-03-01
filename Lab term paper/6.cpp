#include <bits/stdc++.h>
using namespace std;

void counting_sort(deque<int>& dq)
{
    // Find the maximum value in the deque
    int max_val = dq.front();
    for (int x : dq)
    {
        max_val = max(max_val, x);
    }

    // Initialize the count array
    vector<int> cnt(max_val + 1);
    cout<<cnt.size()<<endl;
    // Count the frequency of each element in the deque
    for (int x : dq)
    {
        cnt[x]++;
    }
    for (int x : dq)
    {
        cout<<cnt[x]<<endl;
    }


    // Generate the sorted deque
    deque<int> sorted_dq;
    for (int i = 0; i <= max_val; i++)
    {
        for (int j = 0; j < cnt[i]; j++)
        {
            sorted_dq.push_back(i);
        }
    }

    dq = sorted_dq; // Replace the original deque with the sorted deque
}

int main()
{
    deque<int> dq;
    int x,n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        dq.push_back(x);
    }

    counting_sort(dq);

    for (auto x : dq)
    {
        cout << x << " ";
    }
    return 0;
}
