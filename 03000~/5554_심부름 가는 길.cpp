#include <bits/stdc++.h>

using namespace std;

int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);

    int sum = 0;
    for(int i = 0; i < 4; i++){
        int num;
        cin >> num;
        sum += num;
    }
    cout << sum / 60 << '\n';
    cout << sum % 60;

    return 0;
}