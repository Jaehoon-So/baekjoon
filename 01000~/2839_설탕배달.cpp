/*
상근이는 요즘 설탕공장에서 설탕을 배달하고 있다. 
상근이는 지금 사탕가게에 설탕을 정확하게 N킬로그램을 배달해야 한다. 
설탕공장에서 만드는 설탕은 봉지에 담겨져 있다. 봉지는 3킬로그램 봉지와 
5킬로그램 봉지가 있다.
상근이는 귀찮기 때문에, 최대한 적은 봉지를 들고 가려고 한다. 예를 들어,
18킬로그램 설탕을 배달해야 할 때, 3킬로그램 봉지 6개를 가져가도 되지만,
5킬로그램 3개와 3킬로그램 1개를 배달하면, 더 적은 개수의 봉지를 배달할 
수 있다.
상근이가 설탕을 정확하게 N킬로그램 배달해야 할 때, 봉지 몇 개를 가져가면 
되는지 그 수를 구하는 프로그램을 작성하시오.
*/


#include <iostream>
using namespace std;
#define MAX 5001
int D[MAX][MAX];
int smallest = 0;

int main(){
    int n;
    cin >> n;
    int i = 0, j = 0;
    int weight = MAX;
    int num = MAX;
    D[i][0] = 3*i;
    while(D[i][0] <= n){
        ++i;
        D[i][0] = 3*i;
    }
    D[0][j] = 5 * j;
    while(D[0][j] <= n){
        ++j;
        D[0][j] = 5 * j;
        
    }
    for(int three = 0; three <= i; three++){
        for(int five = 0; five <= j; five++){
            D[three][five] = D[three][0] + D[0][five];
            if(D[three][five] == n && three+five < num){
                num = three+five;
            }
        }
    }
    if(num == MAX) cout << -1 << endl;
    else cout << num << endl;

    return 0;
}
