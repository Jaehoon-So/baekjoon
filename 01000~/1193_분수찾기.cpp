#include <bits/stdc++.h>

using namespace std;

int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);

    int x; cin >> x;

    int sum = 2;
    int cnt = 0;
    int parent, child;

    while(1){
        for(int i = 1; i < sum; i++){
            if(sum % 2 == 1){
                child = i;
                parent = sum - i;
                cnt++;
            }
            else{
                parent = i;
                child = sum - i;
                cnt++;
            }
            //printf("(child, parent) = (%d, %d)\n", child, parent);
            if(cnt == x) break;
        }
        if(cnt == x) break;
        sum++;
    }
    cout << child << "/" << parent << '\n';
    return 0;
}