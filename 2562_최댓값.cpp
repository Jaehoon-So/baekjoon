#include <bits/stdc++.h>

using namespace std;
int maxNum = -1;
int index;
int numArr[9];

int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);

    for(int i = 0; i < 9; i++){
        cin >> numArr[i];
        if(numArr[i] > maxNum){
            maxNum = numArr[i];
            index = i;
        }
    }
    cout << maxNum << '\n';
    cout << index + 1 << '\n';

    return 0;
}