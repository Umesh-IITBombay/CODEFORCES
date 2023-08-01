#include"bits/stdc++.h"
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    vector<int> arr(n - 1);
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }
    vector<bool> refer_arr(n, false);
    refer_arr[0] = true;
    for (int i = 0; i < n - 1; i++) {
        int next_day = i + arr[i];
        if (next_day >= 0 && next_day < n) {
            refer_arr[next_day] = true;
            i = next_day - 1;
        } else {
            break;
        }
    }
    if (refer_arr[t - 1]) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
