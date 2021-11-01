#include <stdlib.h>
#include <stdio.h>

char **capitalize(const char *test_str) 
{
	char *str1 = 0;
	char *str2 = 0;
	int i;

	i = 0;
	while (test_str[i])
	{
		if (i % 2 != 0)
		{
			*str1[i] = *test_str[i];
		}
		i++;
	}
	i = 0;
	while (test_str[i])
	{
		if (i % 2 == 0)
		{
			*str2[i] = *test_str[i];
		}
		i++;
	}
}

int main()
{
	char *test_str = "abcdef";
	printf("%s\n", *capitalize(**test_str));

}