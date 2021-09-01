#include <stdio.h>

int main() {
	int A, B, C;
	int result;
	scanf("%d %d %d", &A, &B, &C);
	result = A * B * C;
	int n[10] = { 0, };
	int i = 0;

	while (result > 0) {
		n[result % 10] = n[result % 10] + 1;
		result = result / 10;

	}

	for (i = 0; i < 10; i++) {
		printf("%d\n", n[i]);
	}



}