#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int ans;

int main() {
	int n, h;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> h;
		ans = max(ans, h);
	}
	cout << ans << endl;
	return 0;
}