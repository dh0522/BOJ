#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);


	int x;
	int i, j;
	int count = 0;//°¹¼ö  

	for (i = 0; i < n; i++) {
		scanf("%d", &x);
		for (j = 2; j <= x; j++) {
			if (x == j)	count++;
			if (x % j == 0) 	break;
		}

	}


	printf("%d", count);
}