#include <bits/stdc++.h>

using namespace std;
const int MAX = 10000000;
bool isPrime(int n) {
    //printf("isPrime(%d)\n", n);
    if (n == 1) return false;
    bool flag = true;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            flag = false;
            break;
        }
    }
    return flag;
}

int nextPrime(int n) {
    int nextprime = 0;
    bool find = false;
    //printf("nextPrime(%d)\n", n);
    for (int i = n + 1; i <= MAX; i++) {
        if (isPrime(i)) {
            return i;
        }
        if (find) break;
    }

    return nextprime;
}
int main() {
    cout.sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int i = 2;
    while (n != 1) {
        if (isPrime(n)) {
            cout << n << '\n';
            n = 1;
        }
        if (n % i == 0) {
            cout << i << '\n';
            n /= i;
        }
        else {
            i = nextPrime(i);
        }
    }
    return 0;
}