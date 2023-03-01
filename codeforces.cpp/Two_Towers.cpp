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
        int n,m,p=0,q=0;
        cin>>n>>m;
        string a,b;
        cin>>a>>b;

        for(int i=0; i<n-1; i++)
        {
            if(a[i]==a[i+1])
                p++;
        }
        for(int i=0; i<m-1; i++)
        {
            if(b[i]==b[i+1])
                q++;
        }
        if(p<=0 && q<=0)
        {
            cout<<"Yes"<<endl;
        }

        else if(p>=2 || q>=2)
        {
            cout<<"No"<<endl;
        }

        else if(p>=1 && q>=1)
        {
            cout<<"No"<<endl;
        }
        else
        {
            if(a[n-1]==b[m-1])
            {
                cout<<"No"<<endl;
            }
            else
            {
                cout<<"Yes"<<endl;
            }
        }
    }
    return 0;
}
