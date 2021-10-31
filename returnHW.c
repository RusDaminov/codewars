#include <stdio.h>

char *greet()
{
	return "hello world!";
}

int main()
{
	printf("%s\n", greet());
	return 0;
}