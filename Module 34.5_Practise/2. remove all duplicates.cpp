#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n; // number of elements in the array
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i]; // input array elements

    set<int> s; // set to store unique elements of the array
    for(int i=0; i<n; i++)
        s.insert(arr[i]); // insert array elements into the set

    // print unique elements of the array
  //  for(auto it=s.begin(); it!=s.end(); it++)
      //  cout << *it << " ";

    for(auto it:s)
        cout << it << " ";


    return 0;
}

