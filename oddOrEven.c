#include <stdio.h>

const char *odd_or_even(const int *v, size_t sz)
{
	int sum;

	sum = 0;
	while (v[sz])
	{
		sum += *v;
		sz++;
	}
	if (sum % 2 != 0)
		return "odd";
	else
		return "even";
}

int main()
{
	int v[] = {1023, 1, 3};
	printf("%d\n", *odd_or_even(*v, 3));
	return (0);
}

//segfault