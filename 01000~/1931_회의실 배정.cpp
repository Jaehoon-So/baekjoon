#include <bits/stdc++.h>

#define LL long long
#define arr array

using namespace std;
vector<pair<LL, LL> > times;

int n;
bool cmp(const pair<LL, LL>& a, const pair<LL, LL>& b){
    return a.first < b.first;
}
int solve(){
    int ans = 0;

    cin >> n;
    for(int i = 0; i < n; i++){
        LL start, end;
        cin >> start >> end;
        times.push_back(make_pair(end, start) );
    
    }
    sort(times.begin(), times.end(), cmp );

    LL last = 0;
    for(int i = 0; i < times.size(); i++){
        if(times[i].second >= last){
            last = times[i].first;
            ans++;
        }
    }

    return ans;
}

int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);

    cout << solve();

    return 0;
}