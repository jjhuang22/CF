#include <cstdio>
#include <iostream>
#include <algorithm>

#define ll long long int

using namespace std;



int main() {
	int n, ans = 0;
	string s;
	cin >> n >> s;
	for (int i = 0; i < n; i++) {
		if (s[i] == '1') {
			ans++;
		}
		else break;
	}

	cout << min(ans + 1, n) << endl;
	return 0;
}