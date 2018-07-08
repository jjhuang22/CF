#include <cstdio>
#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	char c[102][102];
	string s;
	bool valid = true;

	for (int i = 0; i < 102; i++) {
		c[0][i] = ' ';
		c[i][0] = ' ';
		c[101][i] = ' ';
		c[i][101] = ' ';
	}
	for (int i = 1; i <= n; i++) {
		cin >> s;
		for (int j = 1; j <= n; j++) {
			c[i][j] = s[j-1];
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			int total = 0;
			if (c[i][j-1] == 'o') total++;
			if (c[i-1][j] == 'o') total++;
			if (c[i+1][j] == 'o') total++;
			if (c[i][j+1] == 'o') total++;
			if (total % 2 ==1) {
				valid = false;
				break;
			}
		}
	}


	if (valid) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}

