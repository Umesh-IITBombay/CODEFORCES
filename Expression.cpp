// #include"bits/stdc++.h"
// using namespace std;

// int main(){
//     int a,b,c;
//     cin>>a>>b>>c;
//     int maxi = max(a,max(b,c));
//     int mini = min(a,min(b,c));
//     if(mini == 1 && maxi == 1){
//         cout<< a+b+c << endl;
//     }
//     else if(mini == 1){
//         cout << maxi*(a+b+c-maxi);
//     }
//     else{
//         cout<<a*b*c<< endl;
//     }

//     return 0;
// }

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    // Evaluate all possible expressions
    int max_value = max({a + b + c, a * b * c, a * (b + c), (a + b) * c});

    cout << max_value << endl;

    return 0;
}
