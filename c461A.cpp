#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int n;
long long sum;
int arr[300000];

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	for (int i = 0; i < n; i++) {
		sum += (long long)(i + 2) * arr[i];
	}
	sum -= arr[n-1];
	cout << sum << endl;
	return 0;
}