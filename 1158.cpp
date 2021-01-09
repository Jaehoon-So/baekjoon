#include <iostream>
#include <vector>
#define MAX 5001
using namespace std;

bool isUsed(vector<int>& A, int i) {
    if (A[i] == MAX) return true;
    else return false;
}

int main() {
    cout.sync_with_stdio(false);
    int N, K;
    int num;
    cin >> N >> K;
    cout << "<";
    vector<int> people(N+1);
    for (int i = 1; i <= N; i++) {
        people[i] = i;
    }
    num = K;
    int n = N;
    while (N--) {
        if (!isUsed(people, num)) {
            if (N > 0) cout << people[num] << ", ";
            else cout << people[num];
            people[num] = MAX;
        }
        else {
            num = num + 1;
            N++;
        }
        
        num = (num + K) % n;
        if (num == 0)
            num = 7;

    }
    cout << ">";

    return 0;
}