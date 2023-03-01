#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    set<int> s1;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s1.insert(x);
    }

    cin >> m;
    set<int> s2;

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        s2.insert(x);
    }

    for (auto x : s1)
    {
           s2.insert(x);
    }

    for (auto x : s2)
    {
        cout << x << " ";
    }
    return 0;
}

