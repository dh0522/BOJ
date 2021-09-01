#include <stdio.h>

int main() {
	int n;//n=정수의 갯수
	int num;
	int max = -1000000, min = 10000000;
	scanf("%d", &n);

	int i;
	for (i = 0; i < n; i++) {
		scanf("%d", &num);
		if (num < min)	min = num;
		if (num > max) max = num;

	}
	printf("%d %d\n", min, max);
	return 0;
}