#include <bits/stdc++.h>

using namespace std;

int main(){

    cout.sync_with_stdio(0);
    cin.tie(0);

    string s; cin >> s;
    int cnt = 0;
    int i = 0;
    while(i < s.size()){
        //cout << s[i] << " " << s[i+1] << '\n';
        if(s[i] == 'c' && (s[i+1] == '=' || s[i+1] == '-') ){
            cnt++;
            i += 2;
            continue;
        }
        if(s[i] == 'd'){
            if(s[i+1] == '-'){
                cnt++; i += 2; continue;
            }
            else if(s[i+1] == 'z' && s[i+2] == '='){
                cnt++; i += 3; continue;
            }
        }
        else if(s[i] == 'n' || s[i] == 'l'){
            if(s[i+1] == 'j'){ cnt++; i += 2; continue;}
        }
        else if(s[i] == 's' || s[i] == 'z'){
             if(s[i+1] == '='){ cnt++; i += 2; continue;}
            }
        i++; cnt++;
    }
  
    cout << cnt << '\n';
    return 0;
}