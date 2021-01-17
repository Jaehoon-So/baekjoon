#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 100000
int D[MAX];
int tiling(int n) {
    D[1] = 1;
    D[2] = 2;
    for (int i = 3; i <= n; ++i) {
        D[i] = (D[i - 1] + D[i - 2]) % 10007;
    }
    return D[n];
}
int main() {

    int n;
    cin >> n;
    tiling(n);
    cout << tiling(n) << endl;
    return 0;
}