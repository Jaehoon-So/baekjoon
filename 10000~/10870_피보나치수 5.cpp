#include <iostream>
#include <cstring>
#define MAX 21
using namespace std;
// 동적계획법이 아닌 메모이제이션을 통한 다이나믹 프로그래밍을 구현해본다.
int cache[MAX];
int fibonacci(int n){
    if(cache[n] != -1) return cache[n];
    else{
        if(n == 0){ 
            cache[n] = 0;
            return cache[n];
        }
        if(n == 1){
            cache[n] = 1;
            return cache[n];
        }
        for(int i = 2; i <= n; i++){
            cache[i] = fibonacci(i-1) + fibonacci(i-2);
        }
    }
    return cache[n];
}
int main(){
    int n; cin >> n;
    memset(cache, -1, sizeof(cache) );

    cache[0] = 0;
    cout << fibonacci(n) << '\n';
    return 0;
}