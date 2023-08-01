/***from dust i have come, dust i will be***/

#include"bits/stdc++.h"
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin>>n;
        cin>>k;
        if(n %2 == k % 2) {
            if(k * k > n) cout<< "No\n";
            else cout<<"YES\n";
        }
        else cout <<"NO\n";
    }

    return 0;
}