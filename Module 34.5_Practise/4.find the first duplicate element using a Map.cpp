#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n; // number of elements in the array
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i]; // input array elements

    map<int, int> freq; // map to store frequency of each element
    int firstDuplicate = -1; // variable to store the index of first duplicate element

    for(int i=0; i<n; i++) {
        freq[arr[i]]++;
         // increase frequency of current element
       // if(freq[arr[i]] == 2) { // if current element is duplicate
         //   firstDuplicate = i; // store index of first duplicate element
         //   break; // exit the loop
     //   }
    }

  for(int i=0; i<n; i++) {
       if( freq[arr[i]]>1)
       {
          cout << "First duplicate element is " << arr[i] << ", first occurring at index " << i << "." << endl;

          return 0;
       }
  }


    //if(firstDuplicate == -1)
        cout << "No duplicate elements found." << endl;
   // else
      //  cout << "First duplicate element is " << arr[firstDuplicate] << ", first occurring at index " << firstDuplicate << "." << endl;

    return 0;
}
