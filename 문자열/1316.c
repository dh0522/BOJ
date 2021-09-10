#include <stdio.h>
#include <string.h>

int GROUPWORD(char input[], int len) {

	int i, j, dist;
	for (i = 0; i < len; i++) {
		for (j = i + 1; j < len; j++) {
			if (input[i] == input[j])
			{
				dist = j - i;
				if (dist >= 2)
				{
					if (input[j - 1] != input[j])
						return 0;
				}
			}

		}
	}
	return 1;

}


int main() {
	int n;
	scanf("%d", &n);
	char word[101];
	int i, result = 0;

	for (i = 0; i < n; i++) {
		scanf("%s", word);
		result = result + GROUPWORD(word, strlen(word));
	}
	printf("%d\n", result);
}