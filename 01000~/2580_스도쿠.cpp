#include <bits/stdc++.h>

using namespace std;

const int MAX = 9;
int table[MAX][MAX];
bool included[MAX];
bool findans = false;
bool promising(int y, int x){
    bool flag = true;
    for(int i = 0; i < 2; i++){
        memset(included, 0, sizeof(included) );
        for(int j = 0; j < 9; j++){
            if(i == 0){
                included[table[y][j]] = true; // i == 0이면 y축에 1~9까지 포함되어 있는지 검사
            }
            else{
                included[table[j][x]] = true; // i == 1이면 x축에 1~9까지 포함되어 있는지 검사
            }
        }
        for(int k = 0; k < 9; k++){
            if(!included[k]) flag = false;
        }
    }
    memset(included, 0, sizeof(included) ); // 3x3칸 안에 1~9의 모든 숫자가 포함되어있는지 확인하기 위해 다시 false 로 초기화
    int countY = y - y % 3;
    int countX = x - x % 3;
    for(int dy = countY; dy < countY + 3; dy++){
        for(int dx = countX; dx < countX+3; dx++){
            included[table[dy][dx]] = true;
        }
    }
    for(int i = 0; i < 9; i++){
        if(!included[i]) flag = false;
    }
    return flag;
}
void sdoqu(int y, int x){
    printf("sdoqu(%d, %d), table[y][x]: %d\n", y, x, table[y][x]);
    if(y == 8 && x == 8){
        for(int i = 1; i <= 9; i++){
            table[y][x] = i;
            if(promising(y, x) ) {
                for(int dy = 0; dy < 9; dy++){
                    for(int dx = 0; dx < 9; dx++){
                        cout << table[dy][dx] << " ";
                    }
                    cout << '\n';
                }
                findans = true;
                break;
            }
        }
        return;
    }
    if(table[y][x] == 0){
        for(int i = 1; i <= 9; i++){
            printf("i: %d\n", i);
            if(findans) return;
            table[y][x] = i;
            if(promising(y, x) ){
                if(x == 8) sdoqu(y+1, 0);
                else sdoqu(y, x+1);
            }
        }
    }
    else{
        if(x == 8) sdoqu(y+1, 0);
        else sdoqu(y, x+1);
    }
}
int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);

    for(int dy = 0; dy < MAX; dy++){
        for(int dx = 0; dx < MAX; dx++){
            cin >> table[dy][dx];
        }
    }
    sdoqu(0, 0);

    return 0;
}