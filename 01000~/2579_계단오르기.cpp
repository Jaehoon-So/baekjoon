/*
 * 계단은 한번에 한계단씩 또는 두 계단씩 오를 수 있다. 즉, 한 계단을 밟으면서 이어서
 * 다음계단이나, 다음다음 계단으로 오를 수 있다.
 * 연속된 세계의 계단을 모두 밟아서는 안된다. <-- 이전의 선택이 앞으로의 결과에 영향을 미치는 부분
 * 마지막 도착계단은 반드시 밟아야 한다.
 * 각 계단에 쓰여있는 점수가 주어질 때 이게임에서 얻을 수 잇는 총 점수의 최댓값을 구하는 프로그램
*/

#include <bits/stdc++.h>

using namespace std;
int stairScore[301];
int cache[301];
int n; // 계단의 갯수
int stair(int begin, int steps){
    //cout << stairScore[begin] << '\n';
    printf("stair(%d, %d)\n", begin, steps);
    if(steps == 3){
        return 0;
    }
    if(begin == n-1){
        return stairScore[begin];
    }
    else if(begin > n-1){
        return 0;
    }
    int& ret = cache[begin];
    if(ret != -1) return ret;
    return ret = stairScore[begin] + max(stair(begin + 1, steps + 1), stair(begin + 2, 0) );

}
int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);
    memset(cache, -1, sizeof(cache) );
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> stairScore[i];
    }
    cout << max(stair(0, 1), 
    
    
    
    
    
    
    
    
    
    
    
    ) << '\n';
    return 0;
}