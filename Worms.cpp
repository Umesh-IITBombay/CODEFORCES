#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n;

    vector<int> piles(n);
    vector<int> prefixSum(n);

    for (int i = 0; i < n; ++i) {
        cin >> piles[i];
        prefixSum[i] = (i == 0) ? piles[i] : prefixSum[i - 1] + piles[i];
    }

    cin >> m;

    vector<int> juicyWorms(m);

    for (int i = 0; i < m; ++i) {
        cin >> juicyWorms[i];
    }

    for (int i = 0; i < m; ++i) {
        // Binary search to find the pile containing the juicy worm
        int pileNumber = lower_bound(prefixSum.begin(), prefixSum.end(), juicyWorms[i]) - prefixSum.begin() + 1;
        cout << pileNumber << '\n';
    }

    return 0;
}
