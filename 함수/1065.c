#include <stdio.h>

int hansoo(int n) {
	if (n < 100) {
		printf("%d", n);
	}
	else
	{
		int i;
		int cnt;
		int a, b, c;
		cnt = 99;

		for (i = 100; i <= n; i++)
		{
			a = i / 100;
			b = (i % 100) / 10;
			c = i % 10;
			if ((a + c) == 2 * b)	cnt++;
		}
		printf("%d\n", cnt);
	}

}


int main() {
	int x;
	scanf("%d", &x);
	hansoo(x);

}