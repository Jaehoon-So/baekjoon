#include <bits/stdc++.h>

using namespace std;

int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);
    char alphabet[26];
    int n; cin >> n;
    int cnt = 0;
    while(n--){
        
        memset(alphabet, 0, sizeof(alphabet) );
        string s; cin >> s;
        bool flag = true;
        for(int i = 0; i < s.size(); i++){
            if(alphabet[s[i] - 'a'] == -1) { flag = false; break; }
            if(alphabet[s[i] - 'a'] == 0) alphabet[s[i] - 'a'] = 1;
            else if(alphabet[s[i] - 'a'] == 1 && s[i] == s[i-1]) continue;
            else if(alphabet[s[i] - 'a'] == 1 && s[i] != s[i-1]) {alphabet[s[i] - 'a'] = -1; flag = false; }
        }

        if(flag){ 
            cnt++;
            //cout << s << '\n';
        }
    }
    cout << cnt << '\n';
    return 0;
}