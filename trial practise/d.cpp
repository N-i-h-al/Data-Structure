#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long int n;
    cin>>n;

    long long int a[n];
    long long int i,b=0;

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n-1; i++)
    {
        if(a[i]>a[i+1])
        {
            b=b+(a[i]-a[i+1]);
            a[i+1] = a[i];
        }
    }
    cout<<b;
return 0;
}
