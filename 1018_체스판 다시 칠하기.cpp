// https://www.acmicpc.net/problem/1018
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#define MAX 50
using namespace std;
char chessBoard[MAX][MAX];
char startWithBlack[8][8] = {
    {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
    {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
    {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
    {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
    {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
    {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
    {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
    {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
};
char startWithWhite[8][8] = {
    {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
    {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
    {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
    {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
    {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
    {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
    {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
    {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'}
};
int minimum = 9999;
int ChtoBlack = 0;
int ChtoWhite = 0;
int size = 8;
void colored(int y, int x) {
    ChtoBlack = 0; ChtoWhite = 0;
    for (int dy = y; dy < y + 8; dy++) {
        for (int dx = x; dx < x + 8; dx++) {
            if (chessBoard[dy][dx] != startWithBlack[dy - y][dx - x]) {
                ChtoBlack++;
            }
            if (chessBoard[dy][dx] != startWithWhite[dy - y][dx - x]) {
             
                ChtoWhite++;
            }
        }
    }
}
int main() {

    int n, m;
    //m: 행, n: 열
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        scanf("%s", &chessBoard[i]);
    }
    for (int dy = 0; dy < n - 8 + 1; dy++) {
        for (int dx = 0; dx < m - 8 + 1; dx++) {
            colored(dy, dx);
            minimum = min(min(minimum, ChtoBlack), ChtoWhite);
        }
    }
    cout << minimum << endl;
    
    return 0;
    // colored(y, x);
}