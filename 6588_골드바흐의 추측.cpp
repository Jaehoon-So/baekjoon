// https://www.acmicpc.net/problem/6588
#include <iostream>
#include <cmath>
#include <vector>
#define MAX 1000000
int D[MAX];
using namespace std;
vector<int> A;
void findPrime(){
    D[0] = D[1] = -1;
    for(int i = 2; i < MAX; i++){
        D[i] = i;
    }
    for(int i = 2; i*i < MAX; i++){
        if(D[i] == i){
            for(int j = i+i; j < MAX; j += i)
                if(D[j] == j)
                    D[j] = i;
        }
    }
    for(int i = 3; i < MAX; i++)
        if(D[i] == i)
            A.push_back(i);
}
int main(){
    findPrime();
    int num;
    scanf("%d", &num);
    
    while(num != 0){
        //printf("num: %d\n", num);
        for(int i = 0; i < A.size(); i++){
            if(D[num-A[i]] == num - A[i]){
                printf("%d = %d + %d\n", num, A[i], num-A[i]);
                
                break;
            }
        }
        scanf("%d", &num);
    }
}