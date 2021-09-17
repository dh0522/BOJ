#include <stdio.h>
#include <math.h>

int main() {
	int t;//test°¹¼ö
	scanf("%d", &t);

	int x, y;
	int i, j;

	for (i = 0; i < t; i++) {
		int result;
		scanf("%d %d", &x, &y);

		double distance = sqrt(y - x);
		double up = round(distance);

		if (distance <= up)	result = 2 * up - 1;
		else	result = 2 * up;

		printf("%d\n", result);

	}
}