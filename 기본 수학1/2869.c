#include <stdio.h>
int main() {
	int a, b, v;	//a= ���� �ö󰡴� b=�㿡 �������� v=�ѹ���
	scanf("%d %d %d", &a, &b, &v);
	int day = (v - b - 1) / (a - b) + 1;
	printf("%d", day);


}