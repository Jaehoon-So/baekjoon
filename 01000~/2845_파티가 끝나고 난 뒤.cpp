#include <bits/stdc++.h>

using namespace std;

int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);

    int L, P;
    cin >> L >> P;
    int numPeople = L * P;
    for(int i = 0; i < 5; i++){
        int n;
        cin >> n;
        cout << n-numPeople << " ";
    }

    return 0;
}