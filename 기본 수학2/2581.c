#include <stdio.h>

int main() {
	int m, n;
	scanf("%d", &m);
	scanf("%d", &n);

	int i, j;
	int sum = 0;
	int min = 10000;
	int first = 0;

	for (i = m; i <= n; i++)
	{
		for (j = 2; j <= i; j++)
		{

			if (i == j)
			{
				sum += i;
				if (min > sum)	min = sum;
			}
			if (i % j == 0)	break;
		}

	}

	if (sum == 0)	printf("-1");
	else
	{
		printf("%d\n%d", sum, min);

	}
}