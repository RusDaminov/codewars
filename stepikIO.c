#include <stdio.h> 
int main(void) {
	int a, b, res;

	//a = 10;
	//b = 7;
	scanf("%d\n", &a);
	scanf("%d\n", &b);

	res = a + b;

	int c;

	scanf("%d\n", &c);
	//c = 2;
	res = res - c;

	printf("%d\n", res);
	return res;
}