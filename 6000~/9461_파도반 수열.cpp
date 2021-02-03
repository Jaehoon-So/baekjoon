#include <bits/stdc++.h>

using namespace std;
const int MAX = 101;
long long cache[MAX];

int num;
long long padovan(int n){
    if(n == 1 || n == 2 || n == 3) return 1;
    // 메모이제이션
    long long& ret = cache[n];
    if(ret != -1) return ret;
    return ret = padovan(n-2) + padovan(n-3);
}
int main(){

    cout.sync_with_stdio(0);
    cin.tie(0);
    memset(cache, -1, sizeof(cache) );
    cache[1] = cache[2] = cache[3] = 1;

    int caseNum; cin >> caseNum;
    while(caseNum--){
        cin >> num;
        cout << padovan(num) << '\n';
    }

    return 0;
}