#include "bits/stdc++.h"
using namespace std;

int solution(int arr[],int n){
    int mini = INT_MAX;
    for(int i=0;i<n-1;i++){
        if(arr[i+1] - arr[i] < 0) 
            return 0;
        mini = min(mini,arr[i+1]-arr[i]);
    }
    return ((mini/2) + 1);
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++){
            int p;
            cin >> p;
            arr[i] = p;
        }
        cout << solution(arr,n) << endl;
    }
	return 0;
}


