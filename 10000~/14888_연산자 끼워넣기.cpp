#include <bits/stdc++.h>

using namespace std;
const int MAX = 100;
int numArray[MAX];
int oper[4];
int n;
int value = 0;
int minvalue = 1000000000;
int maxvalue = -1000000000;
void operating(int num){ 
    if(num == n-1){
        if(maxvalue < value)
            maxvalue = value;
        if(minvalue > value)
            minvalue = value;
    }
    else{
        for(int i = 0; i < 4; i++){
            if(num == 0) value = numArray[num];
            if(oper[i] > 0){
                int temp = value;
                if(i == 0) value += numArray[num+1];
                else if(i == 1) value -= numArray[num+1];
                else if(i == 2) value *= numArray[num+1];
                else value /= numArray[num+1]; 
                oper[i]--;
                operating(num + 1);
                oper[i]++;
                value = temp;
            }
        }
    }

}
int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> numArray[i];
    }
    for(int i = 0; i < 4; i++){
        cin >> oper[i]; 
        /* 0: +, 1: -, 2: x, 3: / */
    }
    operating(0);
    cout << maxvalue << '\n';
    cout << minvalue << '\n';

    return 0;
}