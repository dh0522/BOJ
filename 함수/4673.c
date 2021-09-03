#include <stdio.h>
int SelfNum(int n) {
	int sum = n;

	while (n > 0) {
		sum = sum + (n % 10);
		n = n / 10;
	}

	return sum;
}

int main() {

	int i;
	int result = 0;
	int Num[10001] = { 0, };

	for (i = 0; i < 10001; i++) {
		result = SelfNum(i);
		if (result < 10001)	Num[result] = 1;
	}


	for (i = 0; i < 10001; i++) {
		if (Num[i] != 1) {
			printf("%d\n", i);
		}
	}

}