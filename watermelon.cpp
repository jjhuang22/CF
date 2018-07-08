#include <cstdio>

using namespace std;

int main() {
	int w;
	scanf("%d", &w);
	if (w % 2 == 0 && w != 2) printf("%s\n", "YES");
	else printf("%s\n", "NO");
	return 0;
}