#include <stdio.h>


int main() {
	int a, b;
	scanf("%d %d", &a, &b);

	int tmp1, tmp2;
	tmp1 = (a % 10) * 100 + (a / 10 % 10) * 10 + (a / 100);
	tmp2 = (b % 10) * 100 + (b / 10 % 10) * 10 + (b / 100);

	if (tmp1 > tmp2)	printf("%d", tmp1);
	else	printf("%d", tmp2);
}