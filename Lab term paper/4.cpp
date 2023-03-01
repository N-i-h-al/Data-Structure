#include<bits/stdc++.h>
using namespace std;

bool valid_sequence(string s)
{
    if(s.empty())
    {
        return true;
    }

    stack<char> stg;
    for (char c : s)
    {
        if (c == '(' || c == '{' || c == '[')
        {
            stg.push(c);
        }
        else if (c == ')' || c == '}' || c == ']')
        {
            if (stg.empty())
            {
                return false;
            }
            if (c == ')' && stg.top() == '(' ||
                    c == '}' && stg.top() == '{' ||
                    c == ']' && stg.top() == '[')
            {
                stg.pop();
            }
            else
            {
                return false;
            }
        }
    }
    return true;
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

