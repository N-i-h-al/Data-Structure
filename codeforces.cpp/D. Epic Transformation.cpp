#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--)
    {
        int n,m=0,k=0;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            k++;
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            if(a[i]!=a[i+1])
            {
                m++;
            }
        }
        if(k-1!=m)
        {
            cout<<"0"<<endl;
        }
        else if(n%2==0 && m!=0)
        {
            cout<<"0";
        }
        else if(n%2!=0 && m!=0)
        {
            cout<<"1";
        }
        else
        {
            cout<<"0"<<endl;
        }

    }
}
