#include <iostream>
#include <algorithm>
#include <vector>
#define MAX 1000000
const int start = 0;
const int endt = 1;
using namespace std;
int schedule[MAX][2];
bool compare(int a[][2], int b[][2]){
    return a[][]
}
int main(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int startTime, endTime;
        cin >> startTime >> endTime;
        schedule[i][start] = startTime; schedule[i][endt] = endTime;

    }
    sort(schedule[start], schedule[endt], compare);

    return 0;
}