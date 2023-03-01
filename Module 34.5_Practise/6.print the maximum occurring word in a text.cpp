#include <bits/stdc++.h> // include all standard libraries
using namespace std;

int main() // main function
{
    string text; // declare a string variable called "text"
    getline(cin, text); // read a line of input and store it in the "text" variable

    map<string, int> freq; // declare a map to store word frequencies
    string word; // declare a string variable called "word"
    stringstream ss(text); // create a stringstream from the "text" variable

    while (ss >> word) // while there are still words in the stringstream
    {
        freq[word]++; // increment the frequency of the current word in the map
    }

    // find the word with maximum frequency
    string max_word; // declare a string variable called "max_word"
    int max_freq = 0; // declare an integer variable called "max_freq" and set it to 0
    for (auto it : freq) // for each key-value pair in the "freq" map
    {
        if (it.second > max_freq) // if the frequency of the current word is greater than the maximum frequency so far
        {
            max_word = it.first; // update the maximum word to the current word
            max_freq = it.second; // update the maximum frequency to the frequency of the current word
        }
    }

    // find the lexicographically smallest word with maximum frequency
    for (auto it : freq) // for each key-value pair in the "freq" map
    {
        if (it.second == max_freq && it.first < max_word) // if the frequency of the current word is equal to the maximum frequency
                                                         //and the current word is lexicographically smaller than the maximum word
        {
            max_word = it.first; // update the maximum word to the current word
        }
    }

    // print the result
    cout << "Maximum occurring time: " << max_freq << endl; // print the maximum frequency
    cout << "Maximum occurring word(s): " << max_word << endl; // print the maximum word(s)
    return 0; // return 0 to indicate successful completion of the program
}

