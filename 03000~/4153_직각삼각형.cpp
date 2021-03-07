#include <bits/stdc++.h>

using namespace std;

int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);

    double len1, len2, len3;
    cin >> len1 >> len2 >> len3;
    while(len1 != 0 && len2 != 0 && len3 != 0){
        double maxLength = max(len1, max(len2, len3) );
        double seg1, seg2, diagonal;
        if(maxLength == len1){
            diagonal = len1;
            seg1 = len2;
            seg2 = len3;
        }
        else if(maxLength == len2){
            diagonal = len2;
            seg1 = len1;
            seg2 = len3;
        }
        else if(maxLength == len3){
            diagonal = len3;
            seg1 = len1;
            seg2 = len2;
        }
        if(diagonal == sqrt(seg1*seg1 + seg2*seg2)){
            cout << "right" << '\n';
        }
        else {
            cout << "wrong" << '\n';
        }

        cin >> len1 >> len2 >> len3;
    }

    return 0;
}