#include <stdio.h>

int main5(void) {

	int H, M;//H=hour M=minute
	scanf("%d %d", &H, &M);
	
	if (M < 45) {
		if (H == 0) {
			H = 23;
		}
		else
		{
			H= H - 1;
		}
		
		M = M - 45;
		M = 60 + M;

		printf("%d %d \n", H, M);
	}
	else {
		M = M - 45;
		printf("%d %d\n", H, M);
	}


}