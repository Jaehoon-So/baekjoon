#include <bits/stdc++.h>

using namespace std;
bool isPrime[246913];


int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);
    int primeNum = 0;
    int n;
    cin >> n;
    while(n != 0){
        primeNum = 0;
        memset(isPrime, true, sizeof(isPrime));

        for(int i = 2; i <= sqrt(2*n); i++){
            if(isPrime[i]){
                for(int j = i+i; j <= 2*n; j += i){
                    if(isPrime[j]){
                        isPrime[j] = false;
                    }
                }
            }
        }
        for(int i = n + 1; i <= 2*n; i++){
            if(isPrime[i]) primeNum++;
        }
        cout << primeNum << '\n';

        cin >> n;
    }
    return 0;
}
