/*
1. X가 3으로 나누어 떨어지면, 3으로 나눈다.
2. X가 2로 나누어 떨어지면, 2로 나눈다.
3. 1을 뺀다.
*/

#include <iostream>
using namespace std;
#define MAX 1000000
int D[MAX];
int main(){

    int n;
    cin >> n;
    D[1] = 0; D[2] = 1; D[3] = 1;
    for(int i = 4; i <= n; i++){
        if(i <= 3) break;
        int j;
        int smallest = MAX;
        if(i%3 == 0){
            j = i / 3;
            if(1 + D[j] < smallest) smallest = 1 + D[j];
        } 
        if(i%2 == 0){
            j = i / 2;
            if(1 + D[j] < smallest) smallest = 1 + D[j];
        } 
        j = i - 1;
        if(1 + D[j] < smallest) smallest = 1 + D[j];
        

        D[i] = smallest;
    }
    cout << D[n];
    return 0;  
}