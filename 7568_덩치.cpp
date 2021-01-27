#include <bits/stdc++.h>

using namespace std;
const int MAX = 50;
const int WEIGHT = 0;
const int HEIGHT = 1;
int human[MAX][2];
int ranking[MAX];
int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        ranking[i] = 1;
    }
    for(int i = 0; i < n; i++){
        cin >> human[i][WEIGHT] >> human[i][HEIGHT];
    }
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(human[i][WEIGHT] < human[j][WEIGHT] && human[i][HEIGHT] < human[j][HEIGHT])
                ranking[i]++;
            else if(human[i][WEIGHT] > human[j][WEIGHT] && human[i][HEIGHT] > human[j][HEIGHT])
                ranking[j]++;
            
        }
    }

    for(int i = 0; i < n; i++){
        cout << ranking[i] << '\n';
    }
    return 0;
}