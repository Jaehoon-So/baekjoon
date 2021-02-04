#include <bits/stdc++.h>

using namespace std;
bool selfNum[15000];
void FindSelfNum(int n){
    int selfnum = n;
    int temp = n;
    while(temp > 0){
        selfnum += (temp % 10);
        temp /= 10;
    }
    selfNum[selfnum] = true;
    return;
}
int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);
    memset(selfNum, 0, sizeof(selfNum) );

    for(int i = 1; i <= 10000; i++){
        FindSelfNum(i);
    }
    for(int i = 1; i <= 10000; i++){
        if(!selfNum[i])
            cout << i << '\n';
    }

    return 0;
}