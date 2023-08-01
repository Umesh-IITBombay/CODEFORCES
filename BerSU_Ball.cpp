#include <iostream>
#include"bits/stdc++.h"
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n;

    int boys[n];
    for (int i = 0; i < n; i++) {
        cin >> boys[i];
    }

    cin >> m;
    int girls[m];
    for (int i = 0; i < m; i++) {
        cin >> girls[i];
    }

    sort(boys, boys + n);
    sort(girls, girls + m);

    int pairs = 0;
    int boyIndex = 0, girlIndex = 0;

    while (boyIndex < n && girlIndex < m) {
        int diff = abs(boys[boyIndex] - girls[girlIndex]);
        if (diff <= 1) {
            pairs++;
            boyIndex++;
            girlIndex++;
        } else if (boys[boyIndex] < girls[girlIndex]) {
            boyIndex++;
        } else {
            girlIndex++;
        }
    }

    cout << pairs << endl;

    return 0;
}