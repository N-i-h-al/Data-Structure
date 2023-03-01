#include<iostream>
#include<string>

using namespace std;

int main()
{
    int longest = 0;
    string s;
    cin>>s;
    for(int i=0; i<s.length();)
    {
        char current = s[i];
        int currLen = 0;
        for(; i<s.length() && current == s[i]; i++)
            currLen++;
        if(currLen > longest)
            longest = currLen ;
    }

    cout<<longest;

    return 0;
}


