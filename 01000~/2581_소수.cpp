#include <bits/stdc++.h>

using namespace std;

int main() {
    cout.sync_with_stdio(0);
    cin.tie(0);

    int m, n;
    int sumOfPrime = 0;
    int minPrime;
    bool firstFlag = true;
    cin >> m >> n;

    for (int i = m; i <= n; i++) {

        if (i == 1) continue;
        bool flag = true;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                //cout << i << '\n';
                flag = false;
                break;
            }

        }
        if (flag) {
            //cout << i << ": " << flag << '\n';
            sumOfPrime += i;
            if (firstFlag) {
                firstFlag = false;
                minPrime = i;
            }
        }
    }
    if (firstFlag) {
        cout << -1 << '\n';
    }
    else {
        cout << sumOfPrime << '\n' << minPrime;
    }

    return 0;
}