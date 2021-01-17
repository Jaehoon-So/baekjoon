#include <iostream>
#include <algorithm>
#define MAX 999
long long D[MAX][MAX];
long long cost[MAX][3];

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        long long red, green, blue;
        cin >> red >> green >> blue;
        cost[i][0] = red; cost[i][1] = green; cost[i][2] = blue;
        if(i == 0){
            // 초기값을 설정해주지 않아 처음에 오답을 제출함.
            D[i][0] = red; D[i][1] = green; D[i][2] = blue;
        }
        //cout << cost[i][1] << " " << cost[i][2] << " "  << cost[i][3] << endl;
    }
    for(int i = 1; i < n; i++){
        D[i][0] = min(D[i-1][1], D[i-1][2]) + cost[i][0];
        D[i][1] = min(D[i-1][0], D[i-1][2]) + cost[i][1];
        D[i][2] = min(D[i-1][0], D[i-1][1]) + cost[i][2];
    }
    cout << min(min(D[n-1][0], D[n-1][1]), D[n-1][2]);


}