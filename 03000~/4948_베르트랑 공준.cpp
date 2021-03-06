#include <bits/stdc++.h>

using namespace std;

int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);
    int primeNum = 0;
    int n;
    cin >> n;
    while(n != 0){
        // 예외 사례: n이 1일때
        if(n == 1) {
            cout << 1 << '\n';
        }
        primeNum = 0;
        for(int i = n; i <= 2*n; i++){
            bool isPrime = true;
            for(int j = 2; j <= sqrt(i); j++){
                if(i % j == 0){
                    isPrime = false;
                    break;
                }
            }
            if(isPrime){
                primeNum++;
            }
        }
        cout << primeNum << '\n';
        cin >> n;
    }
    return 0;
}