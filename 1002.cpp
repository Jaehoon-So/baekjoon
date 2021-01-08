// 조규현과 백승환은 터렛에 근무하는 직원이다. 하지만 워낙 존재감이 없어서 
// 인구수는 차지하지 않는다. 다음은 조규현과 백승환의 사진이다.
// 이석원은 조규현과 백승환에게 상대편 마린(류재명)의 위치를 계산하라는 명령을 내렸다.
// 조규현과 백승환은 각각 자신의 터렛 위치에서 현재 적까지의 거리를 계산했다.

// 조규현의 좌표 (x1, y1)와 백승환의 좌표 (x2, y2)가 주어지고, 조규현이 계산한 류재명과의
// 거리 r1과 백승환이 계산한 류재명과의 거리 r2가 주어졌을 때, 류재명이 있을 수 있는 
// 좌표의 수를 출력하는 프로그램을 작성하시오.

#include <iostream>
#include <cmath>
#include <vector>

#define MAX 10000
using namespace std;

int main(void){

    int x1, y1, r1;
    int x2, y2, r2;

    int caseNum;

    cin >> caseNum;

    vector<int> cases(caseNum);
    
    

    for(int i = 0; i < caseNum; i++){
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        int dist = pow(x2-x1, 2) + pow(y2-y1, 2);
        int powAddNum = (r1 + r2) * (r1 + r2);
        int powSubNum = (abs(r1 - r2)) * (abs(r1 - r2));
        

        if(dist < powAddNum && dist > powSubNum)
            cout << 2;
        else if(dist == powAddNum || (dist == powSubNum && dist != 0))
            cout << 1;
        else if(dist < powSubNum || dist > powAddNum)
            cout << 0;
        else if(dist == 0){
            if(r1 == r2)
                cout << -1;
            else
                cout << 0;
            
        }
        cout << endl;

    }
 


    return 0;
}