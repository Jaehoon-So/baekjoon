// https://www.acmicpc.net/problem/1011

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int c, i;
    long long x, y;

    cin >> c;
    while(c--){
        cin >> x >> y;
        long long num = (int)sqrt(y-x);
        if((y-x) == pow(num,2))
            cout << 2*num-1 << endl;
        else if(num*num < (y-x) && (y-x) <= num*num+num)
            cout << 2*num << endl;
        else if(num*num+num < (y-x) && (y-x) < (num+1) * (num+1))
            cout << 2*num+1 << endl;
    }
    return 0;
}
    
