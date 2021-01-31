#include <bits/stdc++.h>

using namespace std;
const int MAX  = 10000001;
int D[MAX];
int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    D[1] = 1; D[2] = 2;
    for(int i = 3; i <= n; i++){
        D[i] = (D[i-1] + D[i-2]) % 15746;
    }
    cout << D[n];
    return 0;
}