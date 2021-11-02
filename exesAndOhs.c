#include <stdbool.h>
#include <stdio.h>

bool xo(const char *str)
{
	int x;
	int o;
	int i;

	i = 0;
	x = 0;
	o = 0;
	while (s[i])
	{
		if ((s[i] == 120) || (s[i] == 88))
			x++;
		if ((s[i] == 111) || (s[i] == 79))
			o++;
		i++;
	}
	return ((x - o) == 0);
}

int main()
{
	char *c ="xO";
	printf("%d\n", xo(c));
	return (0);
}

//done