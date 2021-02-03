#include <bits/stdc++.h>

using namespace std;

int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);
    double score[1000];
    memset(score, 0, sizeof(score) );
    int n; cin >> n;
    double maxScore = -1;
    for(int i = 0; i < n; i++){
        cin >> score[i];
        maxScore = max(maxScore, score[i]);
    }
    float scoreSum = 0;
    for(int i = 0; i < n; i++){
        score[i] = score[i] / maxScore * 100;
        scoreSum += score[i];
    }
    printf("%.1lf\n", scoreSum / n);
    return 0;
}