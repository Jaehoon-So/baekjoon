// https://www.acmicpc.net/problem/1085
#include <iostream>
#include <algorithm>
#define MAX 9999
using namespace std;
int main(){
    cout.sync_with_stdio(false);
    int x, y, w, h;
    cin >> x >> y >> w >> h;
    
    int min = MAX;
    if(x < min) min = x;
    if(w-x < min) min = w-x;
    if(y < min) min = y;
    if(h-y < min) min = h-y;

    cout << min << endl;
    
    return 0;
}