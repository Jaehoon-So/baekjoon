#include <bits/stdc++.h>

using namespace std;

int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);

    int caseNum; cin >> caseNum;

    while(caseNum--){
        int repeat; cin >> repeat;
        string s; cin >> s;
        for(int i = 0; i < s.size(); i++){
            for(int r = 0; r < repeat; r++){
                cout << s[i];
            }
        }
        cout << '\n';
    }

    return 0;
}