#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int z = c - b;
	int n;
	if (b >= c) {
		printf("-1");
		return 0;
	}
	else {
		n = a / z;
		printf("%d", n + 1);
	}
	return 0;
}