#include <stdio.h>

int main() {
	int num;//½ÃÇè °¹¼ö 
	scanf("%d", &num);

	double exam[1000];
	double max = 0;
	int i;
	double average = 0;


	for (i = 0; i < num; i++) {
		scanf("%lf", &exam[i]);
		if (max < exam[i])	max = exam[i];

	}


	for (i = 0; i < num; i++) {
		exam[i] = (exam[i] / max) * 100.0;
		average += exam[i];

	}

	printf("%.2lf", average / (double)num);

}