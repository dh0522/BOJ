#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int row;
	int mom, son;
	int tmp;

	if (n == 1) {
		printf("1/1");
		return 0;
	}

	for (row = 1; row < n; row++) {
		n = n - row; //row=���° ������. 
	}

	tmp = row - n;//���° �������� 

	if ((row % 2) == 0)
	{


	}
	else {
		mom = tmp + 1;
		son = row - tmp;
	}
	printf("%d/%d", son, mom);
}