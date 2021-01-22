#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
bool compare(int a, int b) {
    return a > b;
}
int main() {

    vector<int> v(10);
    string s;
    cin >> s;
    for(int i = 0; i < s.length();++i){
        v[i] = s[i] - '0';
    }
    sort(v.begin(), v.end(), greater<int>());
    for(int i = 0; i < s.length();++i){
        cout << v[i];
    }
}