#include <iostream>

using namespace std;

int T;
int main() {
    cin >> T;
    while (T--) {
        int left = 0, right = 0;
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '(')
                left++;
            if (s[i] == ')')
                right++;
            if (right > left) break;
        }
        if (right > left) {
            cout << "NO" << endl;
            continue;
        }
        if (left == right)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }

    return 0;
}