#include <stddef.h>
#include <stdio.h>

size_t countBits(unsigned value)
{
	unsigned int count = 0;
	while (value) {
		count += value & 1;
		value >>= 1;
	}
	return count;
}

int main()
{
	int n = 9;

	printf("%zu\n", countBits(n));
	return 0;
}
