#include<bits/stdc++.h>
using namespace std;

bool valid_sequence(string s)
{
    if(s.empty())
    {
        return true;
    }

    stack<char> stg;
    const char matching[] = {'(', ')', '{', '}', '[', ']'};
    for (char c : s)
    {
        if (c == matching[(int)c % 2])
        {
            stg.push(c);
        }
        else if (!stg.empty() && stg.top() == matching[(int)c % 2 - 1])
        {
            stg.pop();
        }
        else
        {
            return false;
        }
    }
    return stg.empty();
}

int main()
{
    string input_sequence ;
    cin>>input_sequence;

    if (valid_sequence(input_sequence))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}

