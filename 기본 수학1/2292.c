#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int room = 1, i;

	if (n == 1) {
		printf("1");
		return 0;
	}

	for (i = 1; n > room; i++) {
		room = room + 6 * i;
	}

	printf("%d", i);
}

