#include <bits/stdc++.h>

using namespace std;
int minNum = 10000001;
int maxNum = -10000001;
int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);

    int elemNum; cin >> elemNum;
    while(elemNum--){
        int num; cin >> num;
        minNum = min(minNum, num);
        maxNum = max(maxNum, num);
    }
    cout << minNum << " " << maxNum << '\n';

    return 0;
}