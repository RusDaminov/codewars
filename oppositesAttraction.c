#include <stdio.h>
#include <stdbool.h>

bool lovefunc(int flower1, int flower2) 
{
	if ((flower1 % 2 != 0) && (flower2 % 2 != 0))
		return 0;
	else if ((flower1 % 2 != 0) || (flower2 % 2 != 0))
		return 1;
	return 0;
}

int main()
{
	printf("%d\n", lovefunc(37, 211));
}