#include <bits/stdc++.h>

const int MAX = 101;

using namespace std;

int card[MAX];

int main(){
    int n, m; cin >> n >> m;
    int min = 9999999; int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> card[i];
    }    
    for(int i = 0; i < n-2; i++){
        for(int j = i+1; j < n-1; j++){
            for(int k = j+1; k < n; k++){
                sum = card[i] + card[j] + card[k];
                if(abs(m - sum) < abs(m - min)){
                    if(sum <= m) min = sum;
                }
                sum = 0;
            }
        }
    }
    cout << min << '\n';
    return 0;
}
// 문제 똑바로 안읽어서 브루트 포스로 풀지않고 재귀로 풀어 괜히 시간이
// 오래걸린 문제.