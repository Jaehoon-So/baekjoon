#include <bits/stdc++.h>

using namespace std;
int cache[501][501];
int triangle[501][501];
int n;
int tri(int y, int x){
    if(y == n-1){
        return triangle[y][x];
    }
    int& ret = cache[y][x];
    if(ret != -1) return ret;
    else
        return ret = triangle[y][x] + max(tri(y+1, x), tri(y+1, x+1) );

}
int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);
    memset(cache, -1, sizeof(cache) );

    cin >> n; /* 삼각형의 크기 */
    for(int dy = 0; dy < n; dy++){
        for(int dx = 0; dx < dy+1; dx++){
            cin >> triangle[dy][dx];
        }
    }
    cout << tri(0, 0) << '\n';
    return 0;
}