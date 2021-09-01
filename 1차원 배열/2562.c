#include <stdio.h>
int main() {
	int num[9] = { 0, };
	int max = 0;

	int i;
	for (i = 0; i < 9; i++) {
		scanf("%d", &num[i]);
		if (num[i] > max)
		{
			max = num[i];
		}
	}
	int j;
	for (j = 0; j < 9; j++) {
		if (num[j] == max)
		{
			j = j + 1;
			break;
		}
	}

	printf("%d\n%d\n", max, j);
}