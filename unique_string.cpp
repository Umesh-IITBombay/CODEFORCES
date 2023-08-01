#include <iostream>
#include <string>
#include <unordered_set>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        string s;
        cin >> s;

        unordered_set<string> distinctStrings;

        while (m--) {
            int l, r;
            cin >> l >> r;

            // Apply the operation to the copy
            string copy = s;
            sort(copy.begin() + l - 1, copy.begin() + r);

            // Add the resulting string to the hash set
            distinctStrings.insert(copy);
        }

        // Check if the original string should be counted
        bool containsOriginalString = (distinctStrings.find(s) != distinctStrings.end());

        // Add the original string if it stays the same after any operation
        if (containsOriginalString) {
            distinctStrings.insert(s);
        }

        // Output the number of different strings
        cout << distinctStrings.size() << endl;
    }

    return 0;
}
