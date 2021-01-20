#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 64
using namespace std;
int quadTree[MAX][MAX];
string compressed(int y, int x, int size){
    bool allwhite = true;
    bool allblack = true;
    for(int dy = y; dy < y+size; dy++){
        for(int dx = x; dx < x+size; dx++){
            if(quadTree[dy][dx]) allblack = false;
            else allwhite = false;
        }
    }
    if(allblack) return string("0");
    else if(allwhite) return string("1");
    else{
        int half = size / 2;
        return string("(") + compressed(y, x, half) + compressed(y, x+half, half)
            + compressed(y+half, x, half) + compressed(y+half, x+half, half)
            + string(")");

    }

}
int main(){

    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int color;
            scanf("%1d", &color);
            quadTree[i][j] = color;
        }
    }
    cout << compressed(0, 0, n) << endl;
    return 0;
}