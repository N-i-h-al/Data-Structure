#include <bits/stdc++.h>
using namespace std;

int findMax(int a[],int x, int y)
{
    int m;
    if(x==y)
    {
        return a[x];
    }
    m=findMax(a,x+1,y);
    if(a[x]>m)
    {
        return a[x];
    }
    else
    {
        return m;
    }
}

int main()
{
    int n;
    cin>>n;
    int b[n];
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
    }
    cout<<findMax(b,0,n-1)<<" ";
}
