#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,g,k,v,c;
    cin>>n;
    vector<int>a,b;
    for (int i=0; i<n; i++)
    {
        cin>>g;
        a.push_back(g);
    }
    cin>>k;
    for (int i=0; i<k; i++)
    {
        cin>>c;
        b.push_back(c);
    }
    int idx1=0;
    int idx2=0;
    vector<int>y;
    for(int i=0; i<n+k; i++)
    {
        if(idx1==a.size())
        {
            y.push_back(b[idx2]);
            idx2++;
        }
        else if(idx2==b.size())
        {
            y.push_back(a[idx1]);
            idx1++;
        }

        else if(b[idx2]>a[idx1])
        {
            y.push_back(b[idx2]);
            idx2++;
        }
        else
        {
            y.push_back(a[idx1]);
            idx1++;
        }
    }
    for(int i=0; i<n+k; i++)
    {
        cout<<y[i]<<" ";
    }
    return 0;
}
