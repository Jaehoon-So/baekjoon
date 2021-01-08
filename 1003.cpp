/*
fibonacci(3)을 호출하면 다음과 같은 일이 일어난다.
fibonacci(3)은 fibonacci(2)와 fibonacci(1) (첫 번째 호출)을 호출한다.
fibonacci(2)는 fibonacci(1) (두 번째 호출)과 fibonacci(0)을 호출한다.
두 번째 호출한 fibonacci(1)은 1을 출력하고 1을 리턴한다.
fibonacci(0)은 0을 출력하고, 0을 리턴한다.
fibonacci(2)는 fibonacci(1)과 fibonacci(0)의 결과를 얻고, 1을 리턴한다.
첫 번째 호출한 fibonacci(1)은 1을 출력하고, 1을 리턴한다.
fibonacci(3)은 fibonacci(2)와 fibonacci(1)의 결과를 얻고, 2를 리턴한다.
1은 2번 출력되고, 0은 1번 출력된다. N이 주어졌을 때, fibonacci(N)을 호출했을 때, 
0과 1이 각각 몇 번 출력되는지 구하는 프로그램을 작성하시오.
*/

/*
입력
첫째 줄에 테스트 케이스의 개수 T가 주어진다.
각 테스트 케이스는 한 줄로 이루어져 있고, 
N이 주어진다. N은 40보다 작거나 같은 자연수 또는 0이다.
*/
#include <iostream>
#include <vector>
#define MAX 9999

using namespace std;


vector<int> zeroArr(MAX, 0);
vector<int> oneArr(MAX, 0);


int fibonacciArr[MAX];

int fibonacci(int n){

    for(int i = 0; i <= n; i++){
        if(i == 0){
            fibonacciArr[i] = 0;
            zeroArr[i] = 1;
        }
        else if(i == 1){
            fibonacciArr[i] = 1;
            oneArr[i] = 1;
        }
        else{
            fibonacciArr[i] = fibonacciArr[i-1] + fibonacciArr[i-2];
            zeroArr[i] = zeroArr[i-1] + zeroArr[i-2];
            oneArr[i] = oneArr[i-1] + oneArr[i-2];
        }       
    }
    return fibonacciArr[n];
}

int main(){

    int testcase;
    cin >> testcase;
    
    for(int i = 1; i <= testcase; i++){
        int num;
        cin >> num;
        fibonacci(num);
        cout << zeroArr[num] << " " << oneArr[num] << endl;
        for(int i = 0; i < MAX; i++){
            zeroArr[i] = oneArr[i] = 0;
        }
    }
    return 0;
}