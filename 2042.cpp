#include <iostream>
#include <vector>

// N: 수의 갯수
// M: 수의 변경이 일어나는 횟수
// K: 구간의 합을 구하는 횟수.

using namespace std;

int main(){
    cout.sync_with_stdio(false);

    long long N, M, K;
    cin >> N >> M >> K;
    vector<long long> v(N + 1);
    for(long long i = 1; i <= N; i++) {
        long long n;
        cin >> n;
        v[i] = n;
    }
    while(M != 0 && K != 0){
        int order;
        int b, c;
        cin >> order >> b >> c;
        if(order == 1){
            v[b] = c;
            --M;
        }
        else if(order == 2){
            int sum = 0;
            for(long long i = b; i <= c; i++){
                sum += v[i];
            }
            cout << sum << endl;
            --K;
        }
    }
    
    return 0;
}