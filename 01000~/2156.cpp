#include <bits/stdc++.h>

using namespace std;

int cache[10001];

int main(){

    cout.sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> wine;
    for(int i = 0; i < n; i++){
        int amount;
        cin >> amount;
        wine.push_back(amount);
        if(i == 0) cache[i] = amount;
        else if(i == 1) {
            cache[i] = amount + cache[0];
        }
    }
    for(int i = 2; i < n; i++){
        /*
        * 1. 지금잔을 마시고 전의 잔을 마시지 않은 경우 전전잔의 최대와 같음 cache[i-2]
        * 2. 지금잔과 전의 잔을 마신경우 두잔을 더한것에 세번째전의 잔을 마신것이므로
        * 3. 지금잔을 마시지 않은경우 이전의 경우와 최대로 마실수 있는 양이 같음.
        */
        cache[i] = max(max(wine[i] + cache[i-2], wine[i] + wine[i-1] + cache[i-3]), cache[i-1]);
    }
    cout << cache[n-1] << '\n';
    return 0;
}