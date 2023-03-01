#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string, vector<int>> prev_occur;
    for (int i = 0; i < n; i++)
    {
        string fruit;
        cin >> fruit;
        if (prev_occur.count(fruit) == 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << prev_occur[fruit].back() << endl;
        }
        prev_occur[fruit].push_back(i);
    }

    return 0;
}

