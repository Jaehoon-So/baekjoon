#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

string ret = "0";
void normalize(vector<int>& num) 
{
	num.push_back(0);

	//자릿수 올림을 처리한다.
	int size = num.size();
	for (int i = 0; i < size - 1; i++)
	{
		if (num[i] < 0)
		{
			int borrow = (abs(num[i]) + 9) / 10;
			num[i + 1] -= borrow;
			num[i] += borrow * 10;
		}
		else
		{
			num[i + 1] += num[i] / 10;
			num[i] %= 10;
		}
	}
	//앞에 남은 0을 제거한다.
	while (num.size() > 1 && num.back() == 0)
		num.pop_back();
}
int main(){
    
    int n;
    cin >> n;
    vector<int> num(n);

    return 0;
}