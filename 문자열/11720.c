#include <stdio.h>

int main() {
	int number;
	scanf("%d", &number);

	char input[100] = { 0, };
	int sum = 0, i;

	scanf("%s", input);
	for (i = 0; i < number; i++) {

		sum += input[i] - '0';
	}
	printf("%d\n", sum);
}