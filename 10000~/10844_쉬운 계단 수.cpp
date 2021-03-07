// https://www.acmicpc.net/problem/10844
#include <bits/stdc++.h>

using namespace std;
int n;
int cntStairNum = 0;
long long cache[10][101];
const int DIVISOR = 1000000000; // 1,000,000,000
// count개의 수로 이루어진 계단수의 갯수를 반환하는 함수.
long long StairNum(string number, int count) {
    if (count == n) {
        return 1;
    }
    if (count == 0) {
        long long result = 0;
        for (int i = 1; i <= 9; i++) {
            result += StairNum(number + to_string(i), count + 1) % DIVISOR;
        }
        return result;
    }
    int previousNum = number.back() - 48;
    long long& result = cache[previousNum][count];
    if (result != -1) return result % DIVISOR;
    
    result = 0;
    if (previousNum == 0) {
        return result = StairNum(number + "1", count + 1) % DIVISOR;
    }
    else if (previousNum == 9) {
        return result = StairNum(number + "8", count + 1) % DIVISOR;
    }
    else if (previousNum >= 1 && previousNum <= 8) {
        return result = (StairNum(number + to_string(previousNum - 1), count + 1) % DIVISOR) +
            (StairNum(number + to_string(previousNum + 1), count + 1) % DIVISOR) % DIVISOR;
    }

    return result;
}
int main() {
    cout.sync_with_stdio(0);
    cin.tie(0);
    /*
     * 가능한 수를 전부 돌아가면서 몇개의 게단수가 있는지 세는 것보다
     * 실제로 그 자릿수의 계단수를 만들고 그 n만큼의 계단수가 완성되었을때 카운트를
     * 하는 식으로 하는 것이 어떨까.
    */
    cin >> n;
    string number = "";
    number.clear();
    memset(cache, -1, sizeof(cache));
    cout << StairNum(number, 0) % DIVISOR << '\n';


    return 0;
}