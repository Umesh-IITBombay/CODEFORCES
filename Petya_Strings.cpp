#include <iostream>
#include <cctype>

using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    int len = str1.length();
    for (int i = 0; i < len; i++) {
        char ch1 = tolower(str1[i]);
        char ch2 = tolower(str2[i]);

        if (ch1 < ch2) {
            cout << "-1" << endl;
            return 0;
        } else if (ch1 > ch2) {
            cout << "1" << endl;
            return 0;
        }
    }

    cout << "0" << endl;
    return 0;
}

