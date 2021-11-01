#include <stdio.h>
#include <string.h>

double arithmetic(double a, double b, const char* operator)
{
	if (strncmp(operator, "add", 4) == 0)
		return (a + b);
	else if (strncmp(operator, "multiply", 10) == 0)
		return (a * b);
	else if (strncmp(operator, "divide", 7)== 0)
		return (a / b);
	else if (strncmp(operator, "subtract", 10) == 0)
		return (a - b);
}

int main()
{
	printf("%ff\n", arithmetic(1, 2, "add"));
	printf("%ff\n", arithmetic(8, 2, "subtract"));
	printf("%ff\n", arithmetic(5, 2, "multiply"));
	printf("%ff\n", arithmetic(8, 2, "divide"));
}
//done