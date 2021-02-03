#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#define MAX 7000
char basic[3][3] = {
    {'*', '*', '*'},
    {'*', ' ', '*'},
    {'*', '*', '*'},
};
char stars[MAX][MAX];
int n;
using namespace std;
void star(int y, int x, int size){
    // 기저사례
    if(size == 3){
        for(int dy = y; dy < y+size; dy++){
            for(int dx = x; dx < x+size; dx++){
                stars[dy][dx] = basic[dy-y][dx-x];
            }
        }
    }
    else {
        int threePart = size / 3;
        star(y, x, threePart);
        star(y, x+threePart, threePart);
        star(y, x+2*threePart, threePart);
        star(y+threePart, x, threePart);
        star(y+threePart, x+2*threePart, threePart);
        star(y+2*threePart, x, threePart);
        star(y+2*threePart, x+threePart, threePart);
        star(y+2*threePart, x+2*threePart, threePart);
        for(int dy = y+threePart; dy < y + 2*threePart; dy++){
            for(int dx = x+threePart; dx < x + 2*threePart; dx++){
                stars[dy][dx] = ' ';
            }
        }
    }

}
int main(){

    int n; cin >> n;
    star(0, 0, n);
    for(int dy = 0; dy < n; dy++){
        for(int dx = 0; dx < n; dx++){
            cout << stars[dy][dx];
        }
        if(dy != n-1) cout << '\n';
    }

    return 0;
}