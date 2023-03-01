#include <bits/stdc++.h>
using namespace std;

vector<int> permutation(int n)
{
    vector<int> ans;

    if (n % 2 == 0)
    {
        for (int i = 2; i <= n; i += 2)
        {
            ans.push_back(i);
        }
        for (int i = 1; i < n; i += 2)
        {
            ans.push_back(i);
        }
    }

    else
    {
        for (int i = 2; i <= n - 1; i += 2)
        {
            ans.push_back(i);
        }
        for (int j = 1; j <= n; j += 2)
        {
            ans.push_back(j);
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int N,i,a=0;
    cin>>N;
    vector<int> ans = permutation(N);
    for (i=0; i<ans.size(); i++)
    {
        if(ans[i]-ans[i+1]==1)
        {
            a=1;
        }
    }
    if(a!=1)
    {
        for (i=0; i<ans.size(); i++)
        {
            cout << ans[i]<< " ";
        }
    }
    else
        cout <<"No solution";
    return 0;
}

