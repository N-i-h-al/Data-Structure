#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string, int>prev_occur ;
    for (int i = 0; i < n; i++)
    {
        string fruits;
        cin >> fruits;
        if (prev_occur.count(fruits) == 0)
        {
            cout << "-1"<<endl;
        }
        else
        {
            cout << prev_occur[fruits] <<endl;
        }
        prev_occur[fruits] = i;
    }

    return 0;
}

