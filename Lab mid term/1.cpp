#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n;
    int ne[n];
    for(int i=0; i<n; i++)
    {
        cin>>ne[i];
    }
    for(int i = 0; i<n/2; i++)
    {
        x = ne[i];
        ne[i] = ne[n-i-1];
        ne[n-i-1] = x;
    }
    for(int i=0; i<n; i++)
    {
        cout<<ne[i]<<" ";
    }
    return 0;
}
