#include"bits/stdc++.h"
using namespace std;

int main(){
    string str;
    cin >> str;
    string ans;
    for(int i=0;i<str.size();i++){
        if(i == 0) ans += toupper(str[0]);
        else{
            ans+=tolower(str[i]);
        }
    }
    cout << ans << endl;
    return 0;
}

