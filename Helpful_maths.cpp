#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> numbers;

    // Extract individual numbers from the input string
    for (int i = 0; i < s.length(); i += 2) {
        int num = s[i] - '0';
        numbers.push_back(num);
    }

    // Sort the numbers in non-decreasing order
    sort(numbers.begin(), numbers.end());

    // Reconstruct the new sum in Xenia's format
    string newSum;
    for (int i = 0; i < numbers.size(); i++) {
        newSum += to_string(numbers[i]);
        if (i != numbers.size() - 1) {
            newSum += "+";
        }
    }

    cout << newSum << endl;

    return 0;
}
