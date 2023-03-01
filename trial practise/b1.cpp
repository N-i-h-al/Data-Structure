#include<bits/stdc++.h>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int i,j,a=1,max=0;

    string s;
    cin>>s;

    for(i=0;i<s.size();i++)
    {
        for(j=i+1;j<s.size();j++)
        {
            if(s[i]==s[j])
            {
                a++;
            }
            else
            {
                break;
            }
            if(a>max)
            {
                max=a;
            }
        }
        a=1;
    }
    cout<<max;
}

