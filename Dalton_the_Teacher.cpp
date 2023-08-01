#include <iostream>
#include"bits/stdc++.h"
using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        double p = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] == i + 1) {
                p++;
            }
        }
        cout << ceil(p/2) << endl;
    }
    return 0;
}
