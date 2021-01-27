#include <bits/stdc++.h>

using namespace std;
const int MAX = 100000;
int main(){

    int n; cin >> n;
    int cnt = 0;
    int num = 666;
    string title;
    while(cnt < n){
        title = to_string(num);
        if(title.find("666") >= 0 && title.find("666") <= MAX)
            cnt++;
        num++;
    }
    cout << title << '\n';
    return 0;
}