#include <stdio.h>
#include <math.h>

int main() {
	double x1, x2, y1, y2, res;
	scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
	res = sqrt(pow((x1-x2), 2) + pow((y1-y2), 2));
	printf("%.2lf", res);
	// put your code here
	return 0;
}