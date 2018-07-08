#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int ans = -1;

int main() {
	int n, s, x, y;
	bool buy = false;
	cin >> n >> s;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		if (100 * x + y <= 100 * s) {
			buy = true;
			if (y == 0) ans = max(ans, 0);
			else ans = max(ans, 100 - y);
		}
	}
	
	if (buy) cout << ans << endl;
	else cout << -1 << endl;
	return 0;
}