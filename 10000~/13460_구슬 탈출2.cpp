// https://www.acmicpc.net/problem/13460
#include <bits/stdc++.h>

using namespace std;
const int MAX = 9999;
int minmumcount = numeric_limits<int>::max();
char board[11][11];
int redX, redY;
int blueX, blueY;
int bluePos[2];
bool promising(int count){
    bool flag = true;
    if(board[redY][redX] != 'o' || (redX == blueX && redY == blueY))
        flag = false;
    if(count > minmumcount)
        flag = false;

        return flag;
}
void tiltUpper(){
    board[redY][redX] = '.';
    board[blueY][blueX] = '.';
    while(board[redY-1][redX] != '#'){
        redY = redY - 1;
    }
    while(board[blueY-1][blueX] != '#'){
        blueY = blueY - 1;
    }
    board[redY][redX] = 'r';
    board[blueY][blueX] = 'b';
}
void tiltLower(){
    board[redY][redX] = '.';
    board[blueY][blueX] = '.';
    while(board[redY+1][redX] != '#'){
        redY = redY + 1;
    }
    while(board[blueY+1][blueX] != '#'){
        blueY = blueY + 1;
    }
    board[redY][redX] = 'r';
    board[blueY][blueX] = 'b';
}
void tiltLeft(){
    board[redY][redX] = '.';
    board[blueY][blueX] = '.';
    while(board[redY][redX-1] != '#'){
        redX = redX - 1;
    }
    while(board[blueY][blueX-1] != '#'){
        blueX = blueX - 1;
    }
    board[redY][redX] = 'r';
    board[blueY][blueX] = 'b';
}
void tiltRight(){
    board[redY][redX] = '.';
    board[blueY][blueX] = '.';
    while(board[redY][redX+1] != '#'){
        redX = redX + 1;
    }
    while(board[blueY][blueX+1] != '#'){
        blueX = blueX + 1;
    }
    board[redY][redX] = 'r';
    board[blueY][blueX] = 'b';
}
int game(int count){
    if(count > 10){
        return MAX;
    }
    if(promising(count)){
        minmumcount = count;
    }
    tiltUpper();
    tiltLower();
    tiltLeft();
    tiltRight();
}
int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    for(int dy = 0; dy < n; dy++){
        for(int dx = 0; dx < m; dx++){
            cin >> board[dy][dx];
            if(board[dy][dx] == 'r'){
                redY = dy;
                redX = dx;
            }
            if(board[dy][dx] == 'b'){
                blueY = dy;
                blueX = dx;
            }
        }
    }

    game(0);
    return 0;
}