#include <stdio.h>

int main() {
	int n1, n2;
	double t, res;
    
	scanf("%d %d %lf", &n1, &n2, &t);
	res = (n2 - n1);
	printf("%lf\n", res * t);
	return 0;
}