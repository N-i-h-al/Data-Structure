#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N=1000000+10;
const int MOD=1e9+7;
const int inf=1e18;
inline int read()
{
    int x=0,f=1;
    char c=getchar();
    while(c<'0'||c>'9')
    {
        if(c=='-')f=-1;
        c=getchar();
    }
    while(c>='0'&&c<='9')
    {
        x=(x<<1)+(x<<3)+c-'0';
        c=getchar();
    }
    return x*f;
}
void solve()
{
    int n;
    n=read();
    string s;
    cin>>s;
    int i=0,j=n-1;
    string rev=s;
    reverse(rev.begin(),rev.end());
    if(s==rev)
    {
        printf("Yes\n");
        return;
    }
    while(i<=j)
    {
        if(s[i]==s[j])
        {
            i++,j--;
        }
        else
        {
            break;
        }
    }
    while(i<=j)
    {
        if(s[i]!=s[j])
        {
            s[i]=s[j];
            i++,j--;
        }
        else
        {
            break;
        }
    }
    rev=s;
    reverse(rev.begin(),rev.end());
    if(s==rev)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}
signed main()
{
    int T;
    cin>>T;
    while(T--) solve();
    return 0;
}
