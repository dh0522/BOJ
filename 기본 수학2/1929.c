#include <stdio.h>

int main() {
	int m, n, i, j;
	int sosu[500] = { 0, };
	sosu[1] = 1;

	scanf("%d %d", &m, &n);

	for (i = 2; i <= n; i++)
	{
		for (j = 2; i * j <= n; j++)
		{
			sosu[i * j] = 1;
		}
	}

	int k;
	for (k = m; k <= n; k++)
	{
		if (sosu[k] == 0)	printf("%d\n", k);
	}
	return 0;
}