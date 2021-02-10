#include <bits/stdc++.h>

using namespace std;

int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);

    int caseNum; cin >> caseNum;
    // 케이스의 갯수.
    while(caseNum--){
        int height, wide, visitorNum;
        cin >> height >> wide >> visitorNum;
        int roomHeight;
        int roomWide;
        int room = 0;
        roomWide = visitorNum / height + 1;
        roomHeight = visitorNum % height;
        if(roomHeight == 0){
            /*
             * 방문자의 수가 방 높이의 배수가 되었을 때는 나머지가 0이 되어 층의 호수가
             * 0이 되므로 이를 수정해주고, 방의 옆칸도 나누어떨어져 1더 높게 설정되므로
             * 이도 수정해준다.
            */
            roomHeight = height;
            roomWide -= 1;
        }

        string roomNum1; // 층 수
        string roomNum2; // 방 수

        roomNum1 = to_string(roomHeight);
        if(roomWide >= 10){
            roomNum2 = to_string(roomWide);
        }
        else{
            roomNum2 = string("0") + to_string(roomWide);
        }

        cout << roomNum1 + roomNum2 << '\n';

    }

    return 0;
}