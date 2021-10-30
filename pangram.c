#include <stdio.h>

char is_pangram(const char *str_in)
{
	unsigned char *str;
	unsigned char *c;
	int i = 0;

	c = (unsigned char *)str_in;
	//str = str_in;
	while (str_in[i] != '\0')
	{
		if (str_in[i] > 'a' && c[i] < 'z')
			str[i] = c[i];
		if (str_in[i] > 'A' && c[i] < 'Z')
			str[i] = ft_tolower(c[i]);
		//str[i] = str_in[i] - 32;
		i++;
	}
	return (*str);
}

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

int main()
{
	char r1;
	char r2;

	char *t = "The quick, brown fox jumps over the lazy dog!";
	char *f = "The quick, brown fox jumped over the lazy dog!";
	r1 = is_pangram(t);
	r2 = is_pangram(f);
	printf("%c\n", r1);
	printf("%c\n", r2);
	return 0;
}


