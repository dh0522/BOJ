#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int i, j;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			n = n / i;
			printf("%d\n", i);
			while (n % i == 0)
			{
				printf("%d\n", i);
				n = n / i;
			}

		}
	}
}