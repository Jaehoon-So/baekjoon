#include <bits/stdc++.h>

using namespace std;

bool cmp(const pair<int, string> &u, const pair<int, string> &v){
    return u.first < v.first;
}
int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);

    int n; // 가입한 사람의 수.
    cin >> n;
    
    vector<pair<int, string> > v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
    }
    stable_sort(v.begin(), v.end(), cmp);
    for(int i = 0; i < n; i++){
        cout << v[i].first << " " << v[i].second << '\n';
    }

    return 0;
}