#include <stdio.h>
#include <string.h>
int main() {
	char input[16];
	scanf("%s", input);

	int i;
	int time = 0;
	int len;
	len = strlen(input);

	for (i = 0; i < len; i++) {

		if ('A' <= input[i] && input[i] <= 'C')	time += 2;
		if ('D' <= input[i] && input[i] <= 'F')	time += 3;
		if ('G' <= input[i] && input[i] <= 'I')	time += 4;
		if ('J' <= input[i] && input[i] <= 'L')	time += 5;
		if ('M' <= input[i] && input[i] <= 'O')	time += 6;
		if ('P' <= input[i] && input[i] <= 'S')	time += 7;
		if ('T' <= input[i] && input[i] <= 'V')	time += 8;
		if ('W' <= input[i] && input[i] <= 'Z')	time += 9;

	}

	printf("%d", time + len);




}
