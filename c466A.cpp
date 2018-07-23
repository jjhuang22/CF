#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int n, m, a, b, ans;
	cin >> n >> m >> a >> b;
	ans = min((n - (n/m) * m) * a + (n/m) * b, a * n);
	ans = min(ans, (int)ceil((double)n/m)*b);
	cout << ans << endl;
	return 0;
}