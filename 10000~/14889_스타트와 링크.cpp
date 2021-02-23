#include <bits/stdc++.h>

using namespace std;
int n;
int S[21][21];
bool calculate[21][21];
int minDiff = numeric_limits<int>::max();
int diffValue;
bool included[21];

void team(int numPerson){ 
    printf("team(%d)\n", numPerson);
    /* 스타트 팀에 합류시킨것을 이미 결정한 사람 수.
     * 한쪽 팀만 결정하게 되면 다른팀은 자동으로 결정이 된다.
    */
   if(numPerson == n/2){
       vector<int> team_start, team_link;
       memset(calculate, 0, sizeof(calculate) );
       for(int i = 0; i < n; i++){
           if(included[i])  team_start.push_back(i);
           else team_link.push_back(i);
       }
        int stat_start = 0, stat_link = 0;
        for(int i = 0; i < team_start.size(); i++){
            for(int j = i+1; j < team_start.size(); j++){
                int start_x = team_start[i], start_y = team_start[j];
                int link_x = team_link[i], link_y = team_link[j];
                stat_start += S[start_x][start_y] + S[start_y][start_x];
                stat_link += S[link_x][link_y] + S[link_y][link_x];
            }
        }

        diffValue = abs(stat_start - stat_link);
        minDiff = min(minDiff, diffValue);
        printf("mindiff: %d\n", minDiff);
   }
   else{
       for(int i = 0; i < n-numPerson; i++){
           included[i] = true;
           team(numPerson + 1);
           included[i] = false;
       }

   }
    
}

int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= n; j++){
            cin >> S[i][j];
        }
    }
    memset(calculate, 0, sizeof(calculate) );
    memset(included, 0, sizeof(included) );
    team(0);
    cout << minDiff << '\n';

    return 0;
}