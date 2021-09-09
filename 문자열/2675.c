#include <stdio.h>
#include <string.h>

int main() {
	int t, r;
	char s[21] = { 0, };
	int i, j, a;

	scanf("%d", &t);

	for (a = 0; a < t; a++) {
		scanf("%d %s", &r, s);

		for (i = 0; i < strlen(s); i++)
		{
			for (j = 0; j < r; j++)	printf("%c", s[i]);
		}

		printf("\n");
	}

}