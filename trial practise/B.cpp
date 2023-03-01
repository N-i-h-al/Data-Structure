#include<bits/stdc++.h>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int i,j,a=0,max=0;
    string s;
    cin>>s;


    for(i=0; i<s.size(); i++)
    {
        for (int j = 0; j < s.size(); j++)
        {
                if(s[i]=s[j])
            {
                a++;
            }  
            if(a>max)
            {
                max=a;
            }
        }
        cout<<max;

    }
