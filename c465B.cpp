#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n, ans = 0;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	bool single = false;
	for (int i = 0; i < n; i++) {
		if (a[i] == 1) {
			ans++;
			single = true;
		}

		else {
			if (single) {
				single = false;
				ans++;
			}
		}
	}

	if (!single) ans--;
	cout << max(0, ans) << endl;
	return 0;
}