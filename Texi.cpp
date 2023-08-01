#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> groupSizes(5, 0);

    for (int i = 0; i < n; ++i) {
        int size;
        cin >> size;
        groupSizes[size]++;
    }

    int taxiCount = groupSizes[4];

    while (groupSizes[1] != 0 && groupSizes[3] != 0) {
        taxiCount++;
        groupSizes[1]--;
        groupSizes[3]--;
    }

    if (groupSizes[1] == 0) {
        int p = groupSizes[2] / 2;
        int remain = groupSizes[2] % 2;
        taxiCount += p;
        taxiCount += remain + groupSizes[3];
        groupSizes[2] = 0;
    }

    if (groupSizes[3] == 0) {
        int p = groupSizes[2] / 2;
        int remain = groupSizes[2] % 2;
        taxiCount += p;
        groupSizes[2] -= p*2;
        if(remain == 0) {
            int q = groupSizes[1] / 4;
            taxiCount += q;
            if (groupSizes[1] % 4 != 0) {
                taxiCount++;
            }
        } else {
            int merge = 2 + groupSizes[1];
            if(merge%4 == 0){
                taxiCount+= merge/4;
            }
            else{
                taxiCount+=(merge/4 + 1);
            }
        }
    }

    cout << taxiCount << endl;
    return 0;
}
