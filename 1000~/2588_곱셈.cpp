#include <bits/stdc++.h>

using namespace std;

int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);

    int input1, input2;
    cin >> input1 >> input2;

    int hundred = input2 / 100;
    int decimal = (input2 - hundred * 100) / 10;
    int one = input2 - hundred * 100 - decimal * 10;

    cout << input1 * one << '\n';
    cout << input1 * decimal << '\n';
    cout << input1 * hundred << '\n';
    cout << input1 * input2 << '\n';
    return 0;
}