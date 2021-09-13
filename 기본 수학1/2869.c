#include <stdio.h>
int main() {
	int a, b, v;	//a= 낮에 올라가는 b=밤에 내려오는 v=총미터
	scanf("%d %d %d", &a, &b, &v);
	int day = (v - b - 1) / (a - b) + 1;
	printf("%d", day);


}