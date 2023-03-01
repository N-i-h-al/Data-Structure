#include<bits/stdc++.h>

using namespace std;
int main()
{
    int y,g,n,f,result;
    cin>>n;
    y=n-1;
    vector<int>a;
    for(int i=0; i<y; i++)
    {
        cin>>g;
        a.push_back(g);
    }
    vector<int>b;
    for(int i=0; i<y; i++)
    {
        f=0;
        b.push_back(f);
    }
    for(int i=0; i<y; i++)
    {
        b[a[i]-1]=1;
    }
    for(int i=0; i<y; i++)
    {
        if(b[i]==0)
        {
            result=i+1;
        }
    }
    cout<<result;
}
