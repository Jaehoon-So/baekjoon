#include <bits/stdc++.h>

using namespace std;

int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);

    int a, b; cin >> a >> b;
    int newA, newB;
    newA = 100 * (a % 10) + 10 * ((a / 10) % 10) + ((a / 100) % 10);
    newB = 100 * (b % 10) + 10 * ((b / 10) % 10) + ((b / 100) % 10);

    cout << max(newA, newB) << '\n';
    return 0;
}