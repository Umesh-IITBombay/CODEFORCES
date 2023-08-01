#include"bits/stdc++.h"
using namespace std;


int main(){
    string str;
    cin >> str;
    string result="hello";
    int start=0;
    for(auto it:str){
        if(it == result[start]){
            start++;
        }
    }
    if(start == 5) cout<<"YES" << endl;
    else cout<<"NO" << endl;
    return 0;
}
