#include <bits/stdc++.h>

#define LL long long

using namespace std;
int n, k;
vector<int> coin;
int solve() {
    int ans = 0;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        int price;
        cin >> price;
        coin.push_back(price);
    }
    sort(coin.begin(), coin.end(), greater<int>());

    int i = 0;
    while(true){
        if(k >= coin[i]){
            ans += k / coin[i];
            k = k % coin[i];
            if(k == 0) break;
        }
        i++;
    }
    return ans;

}
int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);

    cout << solve();

    return 0;
}