#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];

        unordered_map<int, int> difference_count;
        long long int total_pairs = 0;

        for (int i = 0; i < n; ++i) {
            int diff = arr[i] - i;
            total_pairs += difference_count[diff];
            difference_count[diff]++;
        }

        cout << total_pairs << endl;
    }

    return 0;
}
