#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	int room[15][15] = { 0, };

	int j;
	for (j = 1; j < 15; j++) {
		room[0][j] = j;
	}


	int k, n;
	int i;
	for (i = 1; i < 15; i++) {
		for (j = 1; j < 15; j++)
			room[i][j] = room[i][j - 1] + room[i - 1][j];
	}

	for (i = 0; i < t; i++) {
		scanf("%d", &k);
		scanf("%d", &n);




		printf("%d\n", room[k][n]);
	}
}