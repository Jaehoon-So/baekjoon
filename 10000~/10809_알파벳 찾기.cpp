#include <bits/stdc++.h>

using namespace std;


int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);
    int alphabet[26];
    memset(alphabet, -1, sizeof(alphabet) );
    string s; cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(alphabet[s.at(i) - 'a'] != -1) continue;
        else alphabet[s.at(i) - 'a'] = i;
    }
    for(int i = 0; i < 26; i++){
        cout << alphabet[i] << " ";
    }


    return 0;
}