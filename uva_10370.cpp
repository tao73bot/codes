#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	int a[1001];
	int x, cnt;
	double average;

	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		x = 0;
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
			x += a[i];
		}
		average = (double) x / (double) n;

		cnt = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] > average)
				cnt++;
		}

		printf("%.3lf%%\n", (double) cnt / (double) n * 100.0);
	}

	return 0;
}