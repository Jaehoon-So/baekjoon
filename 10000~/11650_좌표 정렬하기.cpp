#include <bits/stdc++.h>

using namespace std;

bool cmp(const pair<int, int> &u, const pair<int, int> &v){
    if(u.second < v.second) return true;
    else if(u.second == v.second){
        return u.first < v.first;
    }
    else return false;
}

int main(){

    int n;
    cin >> n;

    vector<pair<int, int> > v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].second >> v[i].first;
    }
    sort(v.begin(), v.end(), cmp);
    for(int i = 0; i < n; i++){
        cout << v[i].second << " " << v[i].first << '\n';
    }
    return 0;
}