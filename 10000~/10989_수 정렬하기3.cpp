#include <bits/stdc++.h>

using namespace std;


int countingNum[10001];
int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);
    memset(countingNum, 0, sizeof(countingNum) );
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        countingNum[num]++;
    }
    //cout << "---------------" << '\n';
    for(int i = 1; i <= 10000; i++){
        for(int j = 0; j < countingNum[i]; j++){
            cout << i << '\n';
        }
    }



    return 0;
}