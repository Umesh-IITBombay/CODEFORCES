#include"bits/stdc++.h"
using namespace std;

void func(vector<pair<int,int> > vec, int k) {
    vector<int> ans;
    cout << 5;

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<pair<int,int>> vec;
        for (int i = 0; i < n; i++) {
            int p;
            cin >> p;
            vec.push_back({i,p});
        }
        func(vec, k);
    }
    return 0;
}
