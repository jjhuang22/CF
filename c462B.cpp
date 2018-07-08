#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {
	long long n, k, answer;
	char c;
	cin >> n >> k;
	long long arr[26];

	memset(arr, 0, sizeof(arr));

	for (long long i = 0; i < n; i++) {
		cin >> c;
		arr[c - 'A']++;
	}

	sort(arr, arr + 26);

	int index = 25;
	while (k > 0) {
		if (arr[index] <= k)
			answer += arr[index] * arr[index];
		else answer += k * k;
		k -= arr[index];
		index--;
	}

	cout << answer << endl;
	return 0;
}