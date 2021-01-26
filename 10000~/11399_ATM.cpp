// https://www.acmicpc.net/problem/11399
#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 1000
using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> P;
    for(int i = 0; i < n; i++){
        int cost;
        scanf("%d", &cost);
        P.push_back(cost);
    }
    sort(P.begin(), P.end());
    int min = P[0];
    
    for(int i = 1; i < n; i++){
        P[i] = P[i-1] + P[i];
        min += P[i];
    }
    cout << min << endl;
    return 0;
}