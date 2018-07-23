#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	if (n < 4) {
		cout << "NO" << endl;
	}
	else if (n % 2 == 1) {
		cout << "YES" << endl;
		cout << "5 * 4 = 20" << endl;
		cout << "20 + 3 = 23" << endl;
		cout << "23 + 2 = 25" << endl;
		cout << "25 - 1 = 24" << endl;
		for (int i = 6; i < n; i += 2) {
			cout << i+1 << " - " << i << " = 1" << endl;
			cout << "24 * 1 = 24" << endl;
		}
	}
	else if (n % 2 == 0) {
		cout << "YES" << endl;
		cout << "1 * 2 = 2" << endl;
		cout << "2 * 3 = 6" << endl;
		cout << "6 * 4 = 24" << endl;
		for (int i = 5; i < n; i += 2) {
			cout << i+1 << " - " << i << " = 1" << endl;
			cout << "24 * 1 = 24" << endl;
		}
	}
	return 0;
}