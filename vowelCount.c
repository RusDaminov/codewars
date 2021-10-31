#include <stddef.h>
#include <stdio.h>

size_t get_count(const char *s)
{
	size_t count;
	size_t i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == 97 || s[i] ==  69 || s[i] == 73 || s[i] == 79 || s[i] == 85)
			count++;
		i++;
	}
	return (count);
}

int main()
{
	char *c ="abracadabra";
	printf("%zu\n", get_count(c));
//	abracadabra
	return (0);
}