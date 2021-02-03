#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;
string sum(string first, string second) {
    int n;
    int carryOut = 0;
    string ret;
    // 주어진 두문자열을 뒤집어 작은 자릿수부터 읽도록 한다.
    reverse(first.begin(), first.end()); reverse(second.begin(), second.end());

    while (first.length() < second.length()) {
        // second 가 더 길어질때까지 first에 0추가.
        first += '0';
    }
    while (first.length() > second.length()) {
        second += '0';
    }

    for (int i = 0; i < first.length(); ++i) {
        n = (first[i] - '0' + second[i] - '0' + carryOut) % 10;
        ret += to_string(n);
        carryOut = (first[i] - '0' + second[i] - '0' + carryOut) / 10;
    }
    if (carryOut != 0) ret += to_string(carryOut);

    reverse(ret.begin(), ret.end());

    return ret;
}
int main() {
    int n;
    string first;
    string second;
    string ret;

    cin >> n;
    first = '0', second = '1';

    if (n == 0) ret = "0";
    if (n == 1) ret = "1";
    n = n - 1;
    while (n--) {
        ret = sum(first, second);
        first = second;
        second = ret;
    }

    cout << ret << endl;
    return 0;
}