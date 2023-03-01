#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n; // Read the size of the first set from the user
    set<int> s1; // Create an empty set to store the first set

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x; // Read an element of the first set from the user
        s1.insert(x); // Insert the element into the first set
    }

    cin >> m; // Read the size of the second set from the user
    set<int> s2; // Create an empty set to store the second set

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x; // Read an element of the second set from the user
        s2.insert(x); // Insert the element into the second set
    }

    vector<int> intersection; // Create an empty vector to store the intersection of the two sets

    for (auto x : s1) // Iterate over each element of the first set
    {
        if (s2.count(x)) // If the element is present in the second set
        {
            intersection.push_back(x); // Add the element to the intersection vector
        }
    }

    cout << intersection.size() << endl; // Print the size of the intersection vector

    for (auto x : intersection) // Iterate over each element of the intersection vector
    {
        cout << x << " "; // Print the element followed by a space
    }

    cout << endl; // Print a newline character

    return 0; // Exit the program
}
