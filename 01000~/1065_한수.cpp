#include <iostream>
#include <algorithm>
#define MAX 1001
using namespace std;
int D[MAX];
int main(){

    int n;
    cin >> n;
    D[1] = 1;
    for(int i = 1; i <= n; i++){
        if(i < 100) D[i] = D[i-1] + 1;
        else if(i >= 100 && i < 1000){
            int one, ten, hundred;
            hundred = i / 100;
            ten = (i-hundred*100) / 10;
            one = (i-hundred*100-ten*10);
            if((hundred-ten) == (ten-one)){
                D[i] = D[i-1]+1;
            }
            else D[i] = D[i-1];
        }
        else if(i == 1000) D[i] = D[i-1];
        //cout << "D[" << i << "]: " << D[i] << endl;
    }
    cout << D[n] << endl;

    return 0;
}