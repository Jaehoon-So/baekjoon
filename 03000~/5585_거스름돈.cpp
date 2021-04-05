#include <bits/stdc++.h>
#define LL long long
using namespace std;
int p; 
int coin[6] = {500, 100, 50, 10, 5, 1};
int solve(){

    int ans = 0;

    int p; 
    int n;
    cin >> n;
    p = 1000 - n;
    int i = 0;
    while(true){
        if(p >= coin[i]){
            ans += p / coin[i];
            p = p % coin[i];
        }
        i++;
        if(i == 6) break;
    }

    return ans;
}

int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);

    cout << solve();

    return 0;
}