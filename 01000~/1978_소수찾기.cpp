#include <bits/stdc++.h>

using namespace std;

int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);

    int n;
    int primeNum = 0;
    cin >> n;
    while(n--){
        int num;
        bool flag = true;
        cin >> num;
        if(num == 1) continue;
        if(num == 2) {
            primeNum++; continue;
        }
        for(int i = 2; i <= sqrt(num); i++){
            if(num % i == 0) { flag = false; break; }
        }
        if(flag) primeNum++;
    }
    cout << primeNum << '\n';
    return 0;
}