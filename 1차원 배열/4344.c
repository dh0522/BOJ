#include <stdio.h>

int main() {
	int c;//�׽�Ʈ ����
	int n;//�л��� ��
	int sum;
	scanf("%d", &c);

	int i, j;//i=�׽�Ʈ�� j=�л���
	int score[1000];
	double rate;

	for (i = 0; i < c; i++) {
		sum = 0;
		rate = 0;
		scanf("%d", &n);
		for (j = 0; j < n; j++) {

			scanf("%d", &score[j]);
			sum = sum + score[j];

		}
		for (j = 0; j < n; j++) {
			if (score[j] > (sum / n)) {
				rate = rate + 1;
			}
		}
		printf("%.3lf%%\n", (double)rate / n * 100);

	}


}