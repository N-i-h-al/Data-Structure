#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, o = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == 1)
            o++;
    }
    if (o == n)
    {
        cout << 1 << '\n';
        return;
    }
    for (int i = 0; i < n; i++)
    {
        int a = 0, b = 0;
        for (int j = 0; j <= i; j++)
        {
            if (v[j] == 2)
                a++;
        }
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] == 2)
                b++;
        }
        if (a == b && a != 0 && b != 0)
        {
            cout << i + 1 << '\n';
            return;
        }
    }
    cout << -1 << '\n';
}

int main()
{
    int t;
    t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve();
    }
    return 0;
}
