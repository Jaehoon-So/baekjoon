#include <bits/stdc++.h>

using namespace std;

int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);
    int remainder[42]; // 42로 나누었을 때 가능한 나머지는 0~41
    memset(remainder, 0, sizeof(remainder) );
    for(int i = 0; i < 10; i++){
        int num; cin >> num;
        remainder[num % 42]++;
    }
    int remainderNum = 0;
    for(int i = 0; i < 42; i++){
        if(remainder[i] != 0) remainderNum++;
    }
    cout << remainderNum << '\n';

    return 0;
}