#include <bits/stdc++.h>

using namespace std;
const int MIN = -50;
const int MAX = 50;
const int ARRSIZE = 101;
int W[ARRSIZE][ARRSIZE][ARRSIZE];
int RF(int a, int b, int c){
    //printf("RF(%d, %d, %d)\n", a, b, c);
    if(a <= 0 || b <= 0 || c <= 0) { return 1; }
    int& ret = W[a][b][c];
    if(ret != -1) return ret;
    
    else if(a > 20 || b > 20 || c > 20) return ret = RF(20, 20, 20);
    else if(a < b && b < c) return ret = RF(a, b, c-1) + RF(a, b-1, c-1) - RF(a, b-1, c);
    else return ret = RF(a-1, b, c) + RF(a-1, b-1, c) + RF(a-1, b, c-1) - RF(a-1, b-1, c-1);
}
int main(){

    cout.sync_with_stdio(0);
    cin.tie(0);
    memset(W, -1, sizeof(W) );
    int a, b, c;
    cin >> a >> b >> c;
    while(a != -1 || b != -1 || c != -1){
        printf("w(%d, %d, %d) = %d\n", a, b, c, RF(a, b, c) );
        cin >> a >> b >> c;
    }
    return 0;
}