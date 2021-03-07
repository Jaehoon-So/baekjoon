#include <bits/stdc++.h>

using namespace std;

int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);

    int x1, y1;
    int x2, y2;
    int x3, y3;

    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    int tempX;
    int tempY;

    if(x1 == x2) tempX = x3;
    else if(x1 == x3) tempX = x2;
    else if(x2 == x3) tempX = x1;

    if(y1 == y2) tempY = y3;
    else if(y1 == y3) tempY = y2;
    else if(y2 == y3) tempY = y1;
    
    cout << tempX << " " << tempY << '\n';

    return 0;
}