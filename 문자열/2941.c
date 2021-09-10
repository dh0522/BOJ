#include <stdio.h>
#include <string.h>
int main() {
	char input[101];
	scanf("%s", input);

	int i, len;
	len = strlen(input);

	for (i = 0; input[i] != 0; i++) {
		if ((input[i] == 'l' || input[i] == 'n') && input[i + 1] == 'j')	len--;
		if (input[i] == 'd' && input[i + 1] == 'z' && input[i + 2] == '=')	len--;
		if (input[i] == '-') 	len--;
		if (input[i] == '=')	len--;
	}
	printf("%d", len);
}