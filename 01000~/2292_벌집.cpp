#include <bits/stdc++.h>

using namespace std;

int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);
    long long n; cin >> n;
    long long room = 1;
    long long range = 1;
    int cnt = 1;

    while(1){
        if(range >= n) break;
        range += 6*cnt;
        cnt++;
    }
    cout << cnt << '\n';
    return 0; 
}