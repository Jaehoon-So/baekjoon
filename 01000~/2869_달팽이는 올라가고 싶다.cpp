#include <bits/stdc++.h>

using namespace std;

int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);

    int a, b, v;
    cin >> a >> b >> v;
    cout << (v-b-1) / (a-b) + 1 << '\n';
}