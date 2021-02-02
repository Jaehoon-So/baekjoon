#include <bits/stdc++.h>

using namespace std;

int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);
    int zeroToNine[10];
    memset(zeroToNine, 0, sizeof(zeroToNine) );

    long long a, b, c;
    cin >> a >> b >> c;
    long long result = a * b * c;

    while(result > 0){
        zeroToNine[result % 10]++;
        result /= 10;
    }
    for(int i = 0; i < 10; i++){
        cout << zeroToNine[i] << '\n';
    }
    return 0;
}