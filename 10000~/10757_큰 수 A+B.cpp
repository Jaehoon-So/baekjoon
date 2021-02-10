#include <bits/stdc++.h>

using namespace std;
int carry = 0; // 올림해줄 수
int num;
string x, y;
string result = "";
 
string addString() {
	for (int i = 0; i < x.length(); ++i) {
		num = (x[i] - '0' + y[i] - '0' + carry) % 10;
		result += to_string(num);
		carry = (x[i] - '0' + y[i] - '0' + carry) / 10;
	}
	if (carry != 0) {
		result += to_string(carry);
	}
 
	return result;
}
 
int main() {
	
	cin >> x >> y;
 
	reverse(x.begin(), x.end()); //  큰 자릿수가 먼저 저장되어있기 때문에 뒤집어준다.
	reverse(y.begin(), y.end());
 
    // 두 수의 자릿수가 맞춰질때까지 작은 쪽에 0을 넣어준다.
	while (x.length() < y.length()) {
		x += '0';
	}
	while (x.length() > y.length()) {
		y += '0';
	}
 
	addString();
 
	reverse(result.begin(), result.end()); // 다시 결과를 뒤집어 출력한다.
	cout << result;
 
	return 0;
}