#include <bits/stdc++.h>

using namespace std;

int n;
int cnt = 0;
const int MAX = 16;
int cols[MAX];
bool promising(int horse){
    bool flag = true;
    if(horse == 0) return true;
    for(int i = 0; i < horse; i++){
        if(cols[i] == cols[horse] || abs(i-horse) == abs(cols[i] - cols[horse]) )
            flag = false;
    }
    return flag;
}
void nQueens(int horse){
    if(horse == n){
        cnt++;
        return;
    }
    else{
        for(int i = 0; i < n; i++){
            cols[horse] = i;
            if(promising(horse) ){
                nQueens(horse+1);
            }
        }
    }
    return;
}
int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    nQueens(0);
    cout << cnt << '\n';
    return 0;
}