#include <iostream>
#include <cmath>
using namespace std;
//int arr[MAX][MAX];
int counted = 0;
int n, r, c;
bool needCount = true;
// 시간초과로 나와, 범위에 포함하는지를 검사해 포함되지 않는다면 그만큼
// count를 늘리고 값들을 비교하지 않는다.
bool inRange(int y, int x, int size){
    if((y <= r && r < y+size) && (x <= c && c < x+size)) return true;
    else {counted += size*size; return false;}
}
void count(int y, int x, int size){
    if(!needCount) return;
    if(!inRange(y, x, size)) return;
    
    if(size == 2){
        if(y == r && x == c){
            cout << counted << endl;
            needCount = false;
            return;
        }
        counted++;
        if(y == r && (x+1) == c){
            cout << counted << endl;
            needCount = false;
            return;
        }
        counted++;
        if((y+1) == r && x == c){
            cout << counted << endl;
            needCount = false;
            return;
        }
        counted++;
        if((y+1) == r && (x+1) == c){
            cout << counted << endl;
            needCount = false;
            return;
        }
        counted++;

    }
    else{
        int half = size / 2;
        count(y, x, half);
        count(y, x+half, half);
        count(y+half, x, half);
        count(y+half, x+half, half);
    }

}
int main(){
    cin >> n >> r >> c;
    count(0, 0, 1 << n);
    return 0;
}