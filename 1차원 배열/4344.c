#include <stdio.h>

int main() {
	int c;//테스트 개수
	int n;//학생의 수
	int sum;
	scanf("%d", &c);

	int i, j;//i=테스트수 j=학생수
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