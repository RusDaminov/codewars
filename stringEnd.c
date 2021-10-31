#include <stdbool.h>
#include <string.h>
#include <stdio.h>

bool solution(const char *string, const char *ending)
{
	unsigned int	i;
	unsigned int	j;

	if (ending[0] == '\0')
		return ((char *)string);
	i = 0;
	while (string[i] != '\0' && i < len)
	{
		j = 0;
		while (string[i + j] == ending[j] && (i + j) < len)
		{
			if (ending[j + 1] == '\0')
				return (true);
			j++;
		}
		i++;
	}
	return (false);
}

int main()
{
	char *s = "abc";
	char *e = "";
	printf ("%d\n", solution(s, e));
	return 0;
}

//#include <criterion/criterion.h>
//
//bool solution(const char *string, const char *ending);
//
//Test(solution, should_pass_all_the_tests_provided)
//{
//	cr_assert_eq(solution("abc", "bc"), true);
//	cr_assert_eq(solution("abc", "d"), false);
//	cr_assert_eq(solution("abc", ""), true);
//}