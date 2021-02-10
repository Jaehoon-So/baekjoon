#include <bits/stdc++.h>

using namespace std;

int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);

    int caseNum;
    cin >> caseNum; /* 케이스의 숫자 입력 */
    while(caseNum--){
        int resident[15][15];
        memset(resident, 0, sizeof(resident) );
        int k, n; /* k층의 n호 */
        cin >> k >> n;
        int peopleNum;
        for(int i = 0; i <= k; i++){
            for(int j = 1; j <= n; j++){
                if(i == 0){
                    resident[i][j] = j;
                    //printf("resident[%d][%d] = %d\n", i, j, resident[i][j]);
                }
                else{
                    for(int k = 1; k <= j; k++){
                        resident[i][j] += resident[i-1][k];
                    }
                    //printf("resident[%d][%d] = %d\n", i, j, resident[i][j]);
                }
            }
        }
        cout << resident[k][n] << '\n';
    }

    return 0;
}