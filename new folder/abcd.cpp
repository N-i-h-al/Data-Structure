#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n;
    cin >> n; // number of elements in the array
    int a[n];
    for(int i=0; i<n; i++)
        cin >> a[i]; // input array elements

    map<int, int> freq; // map to store frequency of each element
    for(int i=0; i<n; i++)
        freq[a[i]]++; // increment frequency of each element

    // print frequency of each element
    for(auto it=freq.begin(); it!=freq.end(); it++)
        cout << it->first << ": " << it->second << endl;


    return 0;
}