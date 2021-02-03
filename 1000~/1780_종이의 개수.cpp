//https://www.acmicpc.net/problem/1780
#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 3000
int negativeOne = 0, zero = 0, one = 0;
int arr[MAX][MAX];
using namespace std;
void figure(int y, int x, int size) {
    bool n = true;
    bool z = true;
    bool o = true;
    for (int dy = y; dy < y + size; dy++) {
        for (int dx = x; dx < x + size; dx++) {
            // 경우가 세가지이므로 if else문으로 쓰면 안되는 것 주의!
            if (arr[dy][dx] != -1)
                n = false;
            if (arr[dy][dx] != 0)
                z = false;
            if (arr[dy][dx] != 1)
                o = false;
        }
    }
    //printf("n: %d, z: %d, o: %d\n", n, z, o);
    if (n) negativeOne++;
    else if (z) zero++;
    else if (o) one++;
    else {
        // 9가지 구역으로 나누어서 재귀호출
        int trilogy = size / 3;
        figure(y, x, trilogy);
        figure(y + trilogy, x, trilogy);
        figure(y, x + trilogy, trilogy);
        figure(y + trilogy, x + trilogy, trilogy);
        figure(y + 2 * trilogy, x, trilogy);
        figure(y, x + 2 * trilogy, trilogy);
        figure(y + trilogy, x + 2 * trilogy, trilogy);
        figure(y + 2 * trilogy, x + trilogy, trilogy);
        figure(y + 2 * trilogy, x + 2 * trilogy, trilogy);
    }
}
int main() {
    int n;
    cin >> n;
    for (int dy = 0; dy < n; dy++) {
        for (int dx = 0; dx < n; dx++) {
            int num;
            cin >> num;
            arr[dy][dx] = num;
        }
    }
    figure(0, 0, n);
    cout << negativeOne << endl;
    cout << zero << endl;
    cout << one << endl;
}