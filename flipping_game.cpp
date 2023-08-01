#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int max_ones = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int ones = 0;
            for (int k = 0; k < n; k++) {
                // Flip the values between i and j
                if (k >= i && k <= j) {
                    ones += (1 - a[k]);
                } else {
                    ones += a[k];
                }
            }
            max_ones = max(max_ones, ones);
        }
    }

    cout << max_ones << endl;
    return 0;
}
