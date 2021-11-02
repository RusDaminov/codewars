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
		if (s[i] == 97 || s[i] ==  101 || s[i] == 105 || s[i] == 111 || s[i] == 117)
			count++;
		i++;
	}
	return (count);
}

int main()
{
	char *c ="pear tree";
	printf("%zu\n", get_count(c));
	return (0);
}

//done