#include <bits/stdc++.h>

using namespace std;

int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);

    int n, temp, mean = 0, mode = 0; 
    int min, max = 0;
    bool secondFlag = false;
    cin >> n; // 배열의 사이즈를 입력받음.
    vector<int> v(n);
    vector<int> v2(8001, 0);

    for(int i = 0; i < n; i++){
        cin >> v[i];
        mean += v[i];
        if(v[i] <= 0){
            temp = abs(v[i]);
        }
        else{
            temp = v[i] + 4000;
        }
        v2[temp]++;
        if(v2[temp] > max) max = v2[temp];
    }
    sort(v.begin(), v.end() );

    for(int i = -4000; i < 4001; i++){
        if(i <= 0) temp = abs(i);
        else temp = i+4000;
        if(v2[temp] == max){
            mode = i;
            if(secondFlag) break;
            secondFlag = true;
        }
    }
    cout << round(mean/(double)n ) << '\n';
    cout << v[round(n/2)] << '\n';
    cout << mode << '\n';
    cout << v[v.size()-1] - v[0] << '\n';


    return 0;
}