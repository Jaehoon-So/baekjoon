#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main(){
    int n, sum = 0;
    cin >> n;
    string number;
    cin >> number;
    
    for(int i = 0; i < n; i++){
        sum += number[i] - '0';
    }
    cout << sum;
}