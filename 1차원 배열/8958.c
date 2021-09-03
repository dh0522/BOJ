#include <stdio.h>
#include <string.h>

int main() {
	int num, sum, score;
	char z[80];
	scanf("%d", &num);
	int i, j;


	for (i = 0; i < num; i++) {
		sum = 0;
		score = 1;
		scanf("%s", z);

		for (j = 0; j < strlen(z); j++) {
			if (z[j] == 'O') {
				sum = sum + score;
				score++;
			}
			else {
				score = 1;
			}

		}
		printf("%d\n", sum);
	}

}