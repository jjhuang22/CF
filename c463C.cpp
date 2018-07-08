#include <cstdio>
#include <iostream>
#include <algorithm>

#define ll long long int

using namespace std;

ll a[2000][2000];
ll diag1[4000], diag2[4000];

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			// cin >> a[i][j];
			scanf("%I64d", &a[i][j]);
			diag1[i-j+n-1] += a[i][j];
			diag2[i+j] += a[i][j];
		}
	}

	ll sum1 = 0;
	ll sum2 = 0;
	int x1 = 0;
	int y1 = 0;
	int x2 = 1;
	int y2 = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			ll sum = diag1[i-j+n-1]+diag2[i+j]-a[i][j];

			if ((i+j) % 2 == 0) {
				if (sum > sum1) {
					sum1 = sum;
					x1 = i;
					y1 = j;
				}
			}
			else {
				if (sum > sum2) {
					sum2 = sum;
					x2 = i;
					y2 = j;
				}
			}
		}
	}

	cout << sum1 + sum2 << endl;
	cout << x1+1 << " " << y1+1 << " " << x2+1 << " " << y2+1 << endl;
	return 0;
}