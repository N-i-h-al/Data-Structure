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
/*
In the line for(auto it=freq.begin(); it!=freq.end(); it++),
we are creating an iterator it that points to the beginning of the freq map using freq.begin().
The iterator is then incremented using it++ in the for-loop until it reaches the end of the map,
which is pointed by freq.end().Now, to access the key-value pairs of the map, we use it->first to access the key (element) and it->second to access the value (frequency). This is equivalent to using (*it).first and (*it).second respectively.

So, we can use either it->first and it->second or (*it).first and (*it).second to access the key-value pairs of the map through the iterator it.

Using *it directly to access the key-value pairs would result in a compilation error because *it would dereference the iterator and return a reference to the key-value pair, not the key and value themselves. Therefore, we have to use either it->first and it->second or (*it).first and (*it).second.
*/
