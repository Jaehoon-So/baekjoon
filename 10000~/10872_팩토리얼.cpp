#include <iostream>
#include <algorithm>
#define MAX 12
using namespace std;
int ret = 1;
int D[MAX];

int factorial(int n){
    if(n==0) return 1;
    D[0] = 1;
    for(int i = 1; i < n; i++){
        D[i] = (i+1) * D[i-1];
    }
    return D[n-1];
}
int main(){
    int n; cin >> n;
    cout << factorial(n) << '\n';
    return 0;
}