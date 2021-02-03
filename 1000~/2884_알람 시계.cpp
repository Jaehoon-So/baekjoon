#include <bits/stdc++.h>

using namespace std;

int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);
    int h, m;
    cin >> h >> m;
    if(m - 45 < 0){
        h -= 1;
        if(h < 0) h = 23;
        m = (m + 60) - 45;
    }
    else{
        m = m-45;
    }
    cout << h << " " << m << '\n';
    
    return 0;
}