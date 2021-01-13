#include <iostream>
using namespace std;
#define MAX 100000
int D[MAX];
void initialize(){
    for(int i = 0; i < MAX; i++){
        D[i] = 0;
    }
    D[1] = 1;
    D[2] = 2;
    D[3] = 4;
    // 문제예시에 따라 하면 절대로 이러한 갯수가 나오지 않는데
    // 이러한 갯수를 정해주어야만 올바르게 실행되는것을 보아 출제자가
    // 잘못 한 것 같다.
}
int main(){
    int t;
    cin >> t;
    while(t--){
        initialize();
        int n;
        cin >> n;
        for(int i = 4; i <= n; i++){
            D[i] = D[i-1] + D[i-2] + D[i-3];
        }
        cout << D[n] << endl;
    }
    

    return 0;
}