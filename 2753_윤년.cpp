#include <bits/stdc++.h>

using namespace std;

int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);
    int year;
    cin >> year;

    if(year % 400 == 0)
        cout << 1 << '\n';
    else if(year%100 == 0)
        cout << 0 << '\n';
    else if(year%4 == 0)
        cout << 1 << '\n';
    else
        cout << 0 << '\n';
    return 0;
}