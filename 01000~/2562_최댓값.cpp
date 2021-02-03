#include <bits/stdc++.h>

using namespace std;
int maxNum = -1;
int maxIndex;
int numArr[9];

int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);

    for(int i = 0; i < 9; i++){
        cin >> numArr[i];
        if(numArr[i] > maxNum){
            maxNum = numArr[i];
            maxIndex = i;
        }
    }
    cout << maxNum << '\n';
    cout << maxIndex + 1 << '\n';

    return 0;
}