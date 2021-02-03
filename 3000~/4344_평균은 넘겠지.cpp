#include <bits/stdc++.h>

using namespace std;

int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);

    int caseNum; cin >> caseNum;
    while(caseNum--){
        double score[1000];
        double sum = 0;    // 점수 총합
        double avg;        // 점수 평균
        int biggerAvg = 0;
        memset(score, 0, sizeof(score) );
        int studentNum; cin >> studentNum;
        for(int i = 0; i < studentNum; i++){
            cin >> score[i];
            sum += score[i];
        }
        avg = sum / studentNum;
        for(int i = 0; i < studentNum; i++){
            if(score[i] > avg) biggerAvg++;
        }
        printf("%.3lf%%\n", (double)biggerAvg / studentNum * 100);
    }
    return 0;
}