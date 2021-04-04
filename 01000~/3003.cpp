#include <bits/stdc++.h>

using namespace std;

int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);

    int king, queen, rook, bi, knight, phon;
    cin >> king >> queen >> rook >> bi >> knight >> phon;
    cout << 1-king << " " << 1-queen << " " << 2-rook << " " << 2-bi << " " << 2-knight << " " << 8-phon;

    return 0;
}