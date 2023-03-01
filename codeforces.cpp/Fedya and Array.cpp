#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
#define SIZE 1e6+1;
#define endl"\n"

void solve()
{
    ll x,y;
    cin>>x>>y;
    cout<<((x-y)+(x-1-y)+1)<<endl;
    for(ll i=y+1;i<=x;i++)
    {
        cout<<i<<" ";
    }
    for(ll i=x-1;i>=y;i--)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
