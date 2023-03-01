#include <bits/stdc++.h>
using namespace std;

vector<string> merge_sort(vector<string> a, int f, int l)
{
    if (f == l)
    {
        vector<string> last_1= {a[f]};
        return last_1;
    }

    int m = (f + l) / 2;

    vector<string> b = merge_sort(a, f, m);
    vector<string> c = merge_sort(a, m + 1, l);

    vector<string> sorted_a;
    int idx1 = 0, idx2 = 0;

    while (idx1 < b.size() && idx2 < c.size())
    {
        if (b[idx1] <= c[idx2])
        {
            sorted_a.push_back(b[idx1]);
            idx1++;
        }

        else
        {
           sorted_a.push_back(c[idx2]);
            idx2++;
        }
    }

    while (idx1 < b.size())
    {
        sorted_a.push_back(b[idx1]);
        idx1++;
    }

    while (idx2 < c.size())
    {
       sorted_a.push_back(c[idx2]);
        idx2++;
    }

    return sorted_a;
}

int main()
{
    int n;
    cin >> n;

    vector<string> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int first_idx=0;
    int last_idx=n-1;

    vector<string> ans = merge_sort(a, first_idx, last_idx);

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }


    return 0;
}




