#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    vector<int> li(m);
    for (int i = 0; i < m; ++i) {
        cin >> li[i];
    }

    // Store the result for each li
    vector<int> result(m);

    // Use a frequency array to count occurrences of each number
    unordered_map<int, int> frequency;

    // Start from the rightmost element and move left
    for (int i = n - 1; i >= 0; --i) {
        frequency[arr[i]]++;
        result[i] = frequency.size();
    }

    // Output the results for each li
    for (int i = 0; i < m; ++i) {
        cout << result[li[i] - 1] << endl;
    }

    return 0;
}
