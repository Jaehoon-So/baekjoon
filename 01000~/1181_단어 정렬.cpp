#include <bits/stdc++.h>

using namespace std;
/*
bool cmp(const pair<string, int> &u, const pair<string, int> &v){
    if(u.second < v.second) return true;
    else if(u.second == v.second) {
        if(u.first.compare(v.first) == -1) return true;
    }
    else return false;
    return false;
}

int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<pair<string, int> > v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].first;
        v[i].second = v[i].first.size();
    }

    sort(v.begin(), v.end(), cmp);
    vector<string> v2(n);
    string temp;
    for(int i = 0; i < n; i++){
        if(temp == v[i].first) continue;
        cout << v[i].first << '\n';
        v2.push_back(v[i].first);
        temp = v[i].first;
    }
    return 0;
}
*/


bool cmp(string a, string b){
    if(a.size() == b.size() ){
        return a < b;
    }
    else{
        return a.size() < b.size();
    }
}
int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);

    vector<string> v;
    string temp;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string word;
        cin >> word;
        v.push_back(word);
    }

    sort(v.begin(), v.end(), cmp);

    for(int i = 0; i < n; i++){
        if(temp == v[i]) continue;
        cout << v[i] << '\n';
        temp = v[i];
    }

}
