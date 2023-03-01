#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a.begin(),a.end());
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    int ans = 0;
    cout<<"\n";
    for(int i=0 ; i<=n-1 ; i++)
        if(a[i]!=a[i-1+2])
        {
            ans++;
        }
    cout<<"\n"<<ans;
    return 0;
}
