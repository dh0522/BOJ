#include <string.h>

int main() {
	int i, j;
	int count;
	int n;
	while (1) {

		count = 0;
		scanf("%d", &n);
		if (n == 0)	break;

		for (i = n + 1; i <= 2 * n; i++)
		{
			for (j = 2; j <= i; j++)
			{
				if (i == j)	count++;
				if (i % j == 0)	break;
			}
		}
		printf("%d\n", count);
	}
}


