#include <bits/stdc++.h>

using namespace std;
int cache[301];

int main()
{
	int n;
	vector<int> v;
	cin >> n;
	for (int i = 0, t = 0; i < n; i++){
		cin >> t;
		v.push_back(t);
	}
	cache[0] = v[0];
	for (int i = 1; i < n; i++)
		cache[i] = max(v[i] + v[i - 1] + cache[i - 3], v[i] + cache[i - 2]);
	cout << cache[n-1] << endl;
	return 0;
}