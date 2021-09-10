#include <stdio.h>
#include <string.h>
int main(void) {
	char s[1000001];
	int alpha[26] = { 0, };
	int i, max, len;
	int n = 0, max_num = 0;

	scanf("%s", s);
	len = strlen(s);

	for (i = 0; i < len; i++) {
		if (s[i] >= 'A' && s[i] <= 'Z')	n = s[i] - 'A';
		else if (s[i] >= 'a' && s[i] <= 'z') n = s[i] - 'a';
		alpha[n]++;
	}

	max = alpha[0];

	for (i = 1; i < 26; i++) {
		if (max < alpha[i]) {
			max = alpha[i];
			max_num = i;
		}
		else if (max == alpha[i])	max_num = -1;
	}

	if (max_num != -1)	printf("%c", max_num + 65);
	else	printf("?\n");

	return 0;
}