#include <bits/stdc++.h>

using namespace std;

int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);

    long long n, m;
    cin >> n >> m;

    cout << n / m << '\n';
    cout << n - (n / m) * m << '\n';
    return 0;
}