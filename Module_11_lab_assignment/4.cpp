#include <bits/stdc++.h>
using namespace std;

int main()
{
    int g,k,i,j;

    cin>>g;
    int a[g];
    for (int i = 0; i < g; i++)
    {
        cin>>a[i];
    }

    cin>>k;
    int b[k];
    for (int i = 0; i < g; i++)
    {
        cin>>b[i];
    }

    unordered_set<int> s;

    for (int i = 0; i < g; i++)
    {
        s.insert(a[i]);
    }
    int p = s.size();

    for (int i = 0; i < k; i++)
    {
        s.insert(b[i]);
    }
    int q=s.size();

    if(g>k)
    {
        if (s.size() == p)
        {
            cout << "Yes"
                 << "\n";
        }
        else
        {
            cout << "No"
                 << "\n";
        }
    }
    if(k>g)
    {
        if (s.size() == q)
        {
            cout << "Yes"
                 << "\n";
        }
        else
        {
            cout << "No"
                 << "\n";
        }
    }
    else
    {
        if(p==q)
        {
            cout << "Yes"
                 << "\n";
        }
        else
        {
            cout << "No"
                 << "\n";
        }
    }
    return 0;
}
