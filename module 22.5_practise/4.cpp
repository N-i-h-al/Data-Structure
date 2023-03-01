#include<bits/stdc++.h>
using namespace std;

bool is_valid_bracket_sequence(string s)
{
    stack<char> stk;
    for (char c : s)
    {
        if (c == '(' || c == '{' || c == '[')
        {
            stk.push(c);
        }
        else if (c == ')' || c == '}' || c == ']')
        {
            if (stk.empty())
            {
                return false;
            }
            if (c == ')' && stk.top() == '(' ||
                    c == '}' && stk.top() == '{' ||
                    c == ']' && stk.top() == '[')
            {
                stk.pop();
            }
            else
            {
                return false;
            }
        }
    }
    return stk.empty();
}

int main()
{
    string input_sequence ;
    cin>>input_sequence;
    if (is_valid_bracket_sequence(input_sequence))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
