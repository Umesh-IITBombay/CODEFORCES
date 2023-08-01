#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    int n;
    double l;
    cin >> n;
    cin >> l;
    double arr[n + 1];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    arr[n] = l;
    sort(arr, arr + n + 1);

    double maxi = 0;
    for (int i = 0; i < n; i++) {
        maxi = max(maxi, arr[i + 1] - arr[i]);
    }
    double result = max(maxi / 2, max(arr[0] - 0, l - arr[n - 1]));
    cout << fixed << setprecision(8) << result << endl;
    return 0;
}
