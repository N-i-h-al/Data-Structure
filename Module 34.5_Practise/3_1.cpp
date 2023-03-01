#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n; // number of elements in the array
    vector<pair<int,int>> arr(n);
    for(int i=0; i<n; i++)
    {
        cin >> arr[i].first; // input array element value
        arr[i].second = i; // store the index of the element
    }

    // sort the array in increasing order of the value
    sort(arr.begin(), arr.end());

    // print the sorted array with index
    for(int i=0; i<n; i++)
        cout << "Value " << arr[i].first << ", Previous Index " << arr[i].second << endl;

    return 0;
}

