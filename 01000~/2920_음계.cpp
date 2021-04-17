#include <bits/stdc++.h>
#define ll long long
#define FOR(n) for(int i = 0; i < n; i++)
using namespace std;

vector<int> v;
int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);

    FOR(8){
        int num;
        cin >> num;
        v.push_back(num);
    }
    int as, ds, mix;
    as = 1; ds = 1; mix = 1;

    for(int i = 0; i < v.size() - 1; i++){
        if(as == 0 && ds == 0) break;
        if(as != 0 && v[i+1] - v[i] != 1)
            as = 0;
        
        if(ds != 0 && v[i+1] - v[i] != -1)
            ds = 0;
    }
    if(as) cout << "ascending" << '\n';
    if(ds) cout << "descending" << '\n';
    if(as == 0 && ds == 0) cout << "mixed"<< '\n';


    return 0;
}