#include <bits/stdc++.h>
using namespace std;

struct Element {
    int value;
    int index;
};

bool compare(Element a, Element b) {
    return a.value < b.value;
}

int main()
{
    int n;
    cin >> n; // number of elements in the array
    Element arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i].value; // input array element value
        arr[i].index = i; // store the index of the element
    }

    // sort the array in increasing order of the value
    sort(arr, arr+n, compare);

    // print the sorted array with index
    for(int i=0; i<n; i++)
        cout << "Value " << arr[i].value << ", Previous Index " << arr[i].index << endl;

    return 0;
}

