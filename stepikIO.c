#include <stdio.h> 
int main(void) {
	int a, b, res;

	scanf("%d\n", &a);
	scanf("%d\n", &b);
	res = a + b;

	int c;

	scanf("%d\n", &c);
	res = res - c;
	printf("%d\n", res);
	return res;
}