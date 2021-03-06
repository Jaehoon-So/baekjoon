#include <bits/stdc++.h>

using namespace std;

int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);

    int m, n;
    cin >> m >> n;

    for(int i = m; i <= n; i++){
        if(i == 1) continue;
        bool isPrime = true;
        for(int j = 2; j <= sqrt(i); j++){
            if(i % j == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            cout << i << '\n';
        }
    }

    return 0;
}