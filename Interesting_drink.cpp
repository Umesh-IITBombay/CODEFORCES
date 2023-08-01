#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binarySearch(const vector<int>& prices, int coins) {
    int left = 0, right = prices.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (prices[mid] <= coins) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return left;
}

int main() {
    int n, q;
    cin >> n;

    vector<int> prices(n);
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }

    sort(prices.begin(), prices.end());

    cin >> q;
    for (int i = 0; i < q; ++i) {
        int coins;
        cin >> coins;
        int numShops = binarySearch(prices, coins);
        cout << numShops << " " << endl;
    }
    return 0;
}
