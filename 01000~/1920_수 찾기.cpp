#include <bits/stdc++.h>

using namespace std;
int A[100001];
int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);
    memset(A, 0, sizeof(A) );
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        A[num] = 1;
    }
    int n2;
    cin >> n2;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        cout << A[num] << '\n';
    }

    return 0;
}