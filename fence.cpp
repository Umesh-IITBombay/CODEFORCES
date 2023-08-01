#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> heights(n);
    for (int i = 0; i < n; ++i) {
        cin >> heights[i];
    }

    int minSum = 0;
    for (int i = 0; i < k; ++i) {
        minSum += heights[i];
    }

    int startIndex = 0;
    int currentSum = minSum;

    for (int i = k; i < n; ++i) {
        currentSum += heights[i] - heights[i - k];
        if (currentSum < minSum) {
            minSum = currentSum;
            startIndex = i - k + 1;
        }
    }

    cout << startIndex + 1 << endl;

    return 0;
}
