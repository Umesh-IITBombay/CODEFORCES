#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    // Data structure to store laptop information
    vector<pair<int, int> > laptops;

    // Read laptop information
    for (int i = 0; i < n; ++i) {
        int price, quality;
        cin >> price >> quality;
        laptops.push_back(make_pair(price, quality));
    }

    // Sort the laptops based on their prices in ascending order
    sort(laptops.begin(), laptops.end());

    // Check for two laptops satisfying the conditions
    for (int i = 1; i < n; ++i) {
        if (laptops[i].second < laptops[i - 1].second) {
            cout << "Happy Alex\n";
            return 0;
        }
    }

    cout << "Poor Alex\n";
    return 0;
}
