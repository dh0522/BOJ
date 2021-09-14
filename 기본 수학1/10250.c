#include <stdio.h>

int main() {
	int t;//테스트 개수
	scanf("%d", &t);

	int i, j;
	int h, w, n;


	for (i = 0; i < t; i++) {
		scanf("%d %d %d", &h, &w, &n);
		int tmp = 1;
		for (j = 0; n > h; j++) {
			n = n - h;
			tmp++;
		}
		printf("%d%02d\n", n, tmp);

	}


}