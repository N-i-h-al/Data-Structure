#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    while(x--)
    {
        int n;
        cin>>n;
        vector<pair<int,int>>o,e;
        for(int i=0; i<=n; i++)
        {
            int in;
            cin>>in;
            if(in%2==0)
            {
                o.push_back({in,i});
            }
            else
            {
                e.push_back({in,i});
            }
        }
        if(o.size()>=3)
        {
            cout<<"YES";
            cout<<o[0].second<<" "<<o[1].second<<" "<<o[2].second<<" "<<"\n";
        }
        else if(o.size()>=1 && e.size()>=2)
        {
            cout<<o[0].second<<" "<<e[0].second<<" "<<e[1].second<<" "<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}
