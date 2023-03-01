#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> ans;
    int a=0;
    int i,j;
    long long int n ;
    cin>>n;

    if (n % 2 == 0)
    {
        for (i = 2; i <= n; i += 2)
        {
            ans.push_back(i);
        }
        for (i = 1; i <n; i += 2)
        {
            ans.push_back(i);
        }
    }

    else
    {
        for (i = n-1; i >= 2; i -= 2)
        {
            ans.push_back(i);
        }
        for (i = 1; i<=n; i+= 2)
        {
            ans.push_back(i);
        }

        for (i=0; i<ans.size(); i++)
        {
            if(ans[i]-ans[i+1]==1)
            {
                a=1;
            }
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

