#include"bits/stdc++.h"
using namespace std;

void func(int b,int c,int h){
    int arr[2*b-1];
    int p = c+h;
    int ans=0;
    while(b != 0 && p != 0){
        ans = ans+2;
        b--;
        p--;
    }
    if(b == 0)
        cout << ans-1 << endl;
    else
        cout<< ans+1 << endl;
}

int main(){
    int n;
    cin >> n;
    while(n--){
        int b,c,h;
        cin >> b;
        cin >> c;
        cin >> h;
        func(b,c,h);
    }
    return 0;
}