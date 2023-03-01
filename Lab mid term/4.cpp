#include <bits/stdc++.h>
using namespace std;

bool P_e(string s, int x,int y)
{

    if(x>=y)
    {
        return true ;
    }
    if(s[x]!=s[y])
    {
        return false ;
    }
    return P_e(s,x+1,y-1) ;

}


int main()
{
    string ne;
    cin>>ne;
    int l=ne.length();
    if (P_e(ne,0,l-1))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;

}

