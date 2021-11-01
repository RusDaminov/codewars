// Write resulting string into buffer pointed by str_out
// Write function RemoveExclamationMarks which removes all exclamation marks from a given string.
#include <stdio.h>

void remove_exclamation_marks(const char *str_in, char *str_out)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	str_in = str_out;
	while (str_in[i] != '\0')
	{
		if (str_in[i] != '!')
			str_out[i] = str_in[j];
		else
			i++;
		i++;
		j++;
	}
	printf("%s\n", str_in);
	printf("%s\n", str_out);
}

int main()
{
	char *str_in = "Hello World!";
	char *str_out = "q";

	remove_exclamation_marks(str_in, str_out);
	return 0;
}