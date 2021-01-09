/*
정수를 저장하는 스택을 구현한 다음,
입력으로 주어지는 명령을 처리하는 프로그램을 작성하시오.

명령은 총 다섯 가지이다.
push X: 정수 X를 스택에 넣는 연산이다.
pop: 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다.
만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
size: 스택에 들어있는 정수의 개수를 출력한다.
empty: 스택이 비어있으면 1, 아니면 0을 출력한다.
top: 스택의 가장 위에 있는 정수를 출력한다. 만약 스택에 들어있는
정수가 없는 경우에는 -1을 출력한다.
*/
#include <iostream>
#include <stack>
#include <string>

using namespace std;
#define MAX 10001
int main() {
    cout.sync_with_stdio(false);
    int N;
    cin >> N;
    stack<int> s;
    //cout << s.size();
    for (int i = 0; i < N; i++) {
        string order;
        cin >> order;
        if (order == "push") {
            int num;
            cin >> num;
            s.push(num);
        }
        else if (order == "pop") {
            if (s.empty()) cout << -1 << endl;
            else { cout << s.top() << endl; s.pop(); }
        }
        else if (order == "size") {
            cout << s.size() << endl;
        }
        else if (order == "empty") {
            if (s.empty()) cout << 1 << endl;
            else cout << 0 << endl;
        }
        else if (order == "top") {
            if (!s.empty()) cout << s.top() << endl;
            else cout << -1 << endl;
        }
    }
    return 0;
}