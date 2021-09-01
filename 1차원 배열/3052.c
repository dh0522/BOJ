#include <stdio.h>

int main() {

	int i;
	int result = 0;

	int num[10];
	int remain[42] = { 0, };

	for (i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
		remain[num[i] % 42] += 1;
	}

	for (i = 0; i < 42; i++) {
		if (remain[i] > 0) {
			result += 1;
		}
	}

	printf("%d\n", result);

}