//Count the number of Duplicates
//Write a function that will return the count of distinct case-insensitive alphabetic characters and numeric digits that occur more than once in the input string. The input string can be assumed to contain only alphabets (both uppercase and lowercase) and numeric digits.
//
//Example
//"abcde" -> 0 # no characters repeats more than once
//"aabbcde" -> 2 # 'a' and 'b'
//"aabBcde" -> 2 # 'a' occurs twice and 'b' twice (`b` and `B`)
//"indivisibility" -> 1 # 'i' occurs six times
//"Indivisibilities" -> 2 # 'i' occurs seven times and 's' occurs twice
//"aA11" -> 2 # 'a' and '1'
//"ABBA" -> 2 # 'A' and 'B' each occur twice

#include <stdio.h>

size_t duplicate_count(const char *text)
{
	int i;
	int j;
	int count;
	unsigned char *c;

	i = 0;
	j = 0;
	count = 0;
	c = (unsigned char *)text;
	while (text[j] != '\0')
	{
		while (c[i + j] != '\0')
		{
			if ((i + j) != j)
			{
				if (c[i + j] == text[j])
				{
					count++;
				}
			}
			i++;
		}
		j++;
		i = 0;
	}
	if (count > 0)
		return 1;
	return 0;
}

int main()
{
	char *c ="Indivisibilities";
	printf("%zu\n", duplicate_count(c));
	return (0);
}

//wrong