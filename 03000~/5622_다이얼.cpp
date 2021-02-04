#include <bits/stdc++.h>

using namespace std;
int spendTime[10] = {11, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);

    string s; cin >> s;
    int sumTime = 0;
    for(int i = 0; i < s.size(); i++){
        char ch = s[i];
        if(ch >= 'A' && ch <='C')
            sumTime += spendTime[2];
        else if(ch >= 'D' && ch <= 'F')
            sumTime += spendTime[3];
        else if(ch >= 'G' && ch <= 'I')
            sumTime += spendTime[4];
        else if(ch >= 'J' && ch <= 'L')
            sumTime += spendTime[5];
        else if(ch >= 'M' && ch <= 'O')
            sumTime += spendTime[6];
        else if(ch >= 'P' && ch <= 'S')
            sumTime += spendTime[7];
        else if(ch >= 'T' && ch <= 'V')
            sumTime += spendTime[8];
        else if(ch >= 'W' && ch <= 'Z')
            sumTime += spendTime[9];
        else sumTime += spendTime[0];
    }

    cout << sumTime << '\n';


    return 0;
}