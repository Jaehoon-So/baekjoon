#include <bits/stdc++.h>

using namespace std;

int constructor(int n){
    int ans = n;
    while(n > 0){
        int num = n % 10;
        ans += num;
        n = n / 10;
    }
    printf("%d\n", ans);
    return ans;
}

int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);
    int cons = 0;
    int n; cin >> n;
    int i;
    //int construct = n;
    for(i = 1; i <= n; i++){
        cons = constructor(i);
        if(cons == n)
            break;
    }
    if(cons == n) cout << i;
    else cout << 0 << '\n';

    
    return 0;
}