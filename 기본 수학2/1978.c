#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);


	int x;
	int i;
	int count = 0;//°¹¼ö  

	for (i = 0; i < n; i++) {
		scanf("%d", &x);
		if (x == 1)	count = count;

		else if (x < 10) {
			if ((x == 2) || (x == 3) || (x == 5) || (x == 7))	count++;
			else if ((x % 2 == 0) || (x % 3 == 0))	count = count;
		}

		else {
			if ((x % 2 == 0) || (x % 3 == 0) || (x % 5 == 0) || (x % 7 == 0))	count = count;
			else	count++;
		}

	}


	printf("%d", count);
}