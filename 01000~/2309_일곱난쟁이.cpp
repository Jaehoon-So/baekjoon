#include <bits/stdc++.h>

using namespace std;

int height[9];
bool isInclude[9];
bool ans = false;
void countFunc(int num, int index){
    printf("countFunc(%d, %d)\n", num, index);
    if(ans) return;
    if(index == 9) return;
    if(num == 7){
        int sum = 0;
        for(int i = 0; i < 9; i++){
            if(isInclude[i]){
                sum += height[i];
            }
        }
        if(sum == 100){
            for(int i = 0; i < 9; i++){
                if(isInclude[i])
                    cout << height[i] << '\n';
            }
            ans  = true;
        }
        return;
    }
    isInclude[index] = true;
    countFunc(num+1, index+1);
    isInclude[index] = false;
    countFunc(num, index+1);
}
int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);
    memset(isInclude, 0, sizeof(isInclude));
    for(int i = 0; i < 9; i++){
        cin >> height[i];
    }
    countFunc(0, 0);


    return 0;
}