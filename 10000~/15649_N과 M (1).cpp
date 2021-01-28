#include <bits/stdc++.h>

using namespace std;
const int MAX = 9;
int n, m;
int mxN[MAX];
int arr[MAX];
bool visited[MAX];
void backtracking(int c) {
    if (c == m) {
        for (int i = 0; i < m; i++) {
            cout << arr[i] << " ";
        }
        cout << '\n';
        //return;
    }
    else {
        for (int i = 1; i <= n; i++) {
            if(c != 0 && arr[c-1] > i) continue;
            arr[c] = i;
            backtracking(c + 1);     
        }
    }
}
int main() {
    cout.sync_with_stdio(0);
    cin.tie(0);
    memset(visited, 0, sizeof(visited));
    cin >> n >> m;
    backtracking(0);

    return 0;
}