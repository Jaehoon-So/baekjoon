// 평면 상에 N개의 점이 찍혀있고, 그 점을 집합 P라고 하자. 집합 P의 벡터 매칭
// 은 벡터의 집합인데, 
// 모든 벡터는 집합 P의 한 점에서 시작해서, 또 다른 점에서 끝나는 벡터의 집합이다. 
// 또, P에 속하는 모든 점은 한 번씩 쓰여야 한다.
// V에 있는 벡터의 개수는 P에 있는 점의 절반이다.
// 평면 상의 점이 주어졌을 때, 집합 P의 벡터 매칭에 있는 벡터의 합의 길이의 
// 최솟값을 출력하는 프로그램을 작성하시오.

#include <iostream>
#include <cmath>
#include <algorithm>

#define MAX 21
using namespace std;

double ans;
int dx[MAX], dy[MAX];
int N; // 점의 갯수.
bool usedDot[MAX];
void initialize(){
	for(int i = 0; i < MAX; i++){
		usedDot[i] = false;
	}
}

void vectorSumMin(int count, int index){
	if(N % 2 != 0){
		exit(1);
	}
	if(count == N / 2){
		double x = 0, y = 0;

		for(int i = 0; i < N; i++){
			if(usedDot[i]){
				x = x - dx[i];
				y = y - dy[i];
			}
			else{
				x = x + dx[i];
				y = y + dy[i];
			}
		}
		ans = min(ans, sqrt(pow(x, 2) + pow(y, 2)));
		return;
	}
	if(index == N) return;

	vectorSumMin(count, index + 1);
	usedDot[index] = true;
	vectorSumMin(count + 1, index + 1);
	usedDot[index] = false;

}

int main(void){
	ios_base::sync_with_stdio(false);
	cout.precision(7);

	int T; // 케이스 숫자.
	cin >> T;
	for(int i = 0; i < T; i++){
		initialize();
		cin >> N;
		ans = numeric_limits<double>::max();
		for(int j = 0; j < N; j++){
			cin >> dx[i] >> dy[i];
		}
		vectorSumMin(0, 0);
		cout << ans << endl;
	}
	

	exit(0);
}
