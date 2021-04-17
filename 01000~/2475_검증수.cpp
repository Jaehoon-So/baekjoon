#include <bits/stdc++.h>

using namespace std;

int main(void){

    cout.sync_with_stdio(0);
    cin.tie(0);

    int n = 5;
    int sum = 0;
    while(n--){
        int num;
        cin >> num;
        num = (num * num) % 10;
        sum += num;
    }
    cout << sum % 10;

    return 0;
}