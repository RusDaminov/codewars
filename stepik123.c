#include <stdio.h>

int main() {
	int b, f1,f2, f3;
	scanf("%d", &b);
	f1 = b / 100;
	printf("f1 = %d\n", f1);
	printf("b = %d\n", b);
	f2 = (b % 100) / 10;
	printf("f2 = %d\n", f2);
	printf("b = %d\n", b);
	f3 = (b % 100) % 10;
	printf("f3 = %d\n", f1 + f2 + f3);
	return 0;
}