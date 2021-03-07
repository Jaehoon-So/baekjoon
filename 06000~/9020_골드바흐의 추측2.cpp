#include <bits/stdc++.h>

using namespace std;

int main () {

    int t, n, i, j, k;
    int p1, p2;
    bool arr[10001];

    cin >> t;
    /* arr[index]에서 index가 소수인 경우 true, 아닌경우 false로 표현하는 방식. */
    while(t--){
        cin >> n;

        for (j = 2; j <= n; j++) arr[j] = true;

        for (j = 2; j <= sqrt(n); j++) {
            if (arr[j]) {
                for (k = j+j; k <= n; k += j) {
                    if (arr[k]) {
                        arr[k] = false;
                    }
                }
            }
        }

        p1 = p2 = n/2;

        while(1) {
            /* 두수의 합이 n이고, p1과 p2가 소수일때 결과를 출력하고 빠져나간다. */
            if ( (p1 + p2 == n) && arr[p1] && arr[p2]) {
                cout << p1 << " " << p2 << '\n';
                break;
            }
            p1--;
            p2++;
        }

    }

    return 0;
}