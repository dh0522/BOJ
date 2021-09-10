#include <stdio.h>
#include <string.h>

int main() {
	char string[1000001];
	int i, len, word = 1;
	scanf("%[^\n]s", string);
	len = strlen(string);


	for (i = 0; i < len; i++) {
		if (string[i] == ' ' && string[i + 1] != '\n')
			word++;
	}
	if (string[0] == ' ')	word--;
	if (string[strlen(string) - 1] == ' ')	word--;

	printf("%d", word);




}