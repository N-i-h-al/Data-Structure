#include<bits/stdc++.h>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    vector<int>x;
    x.resize(n);

    for(int i=0;i<n;i++)
        cin>>x[i];

    sort(x.begin(),x.end());

    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            ans++;
            continue;
        }
        if(x[i]!=x[i-1])
        {
            ans++;
        }
    }
    cout<<ans<<" ";
    return 0;
}
