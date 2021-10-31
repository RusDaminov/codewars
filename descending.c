#include <inttypes.h>
#include <stdio.h>
#include <string.h>

char *descendingOrder(uint64_t n)
{
	size_t i;
	size_t j;
	uint64_t z;
	char *str;
	char *tmp;

	i = 0;
	j = 0;
//	z = strlen(str);

	while (n)
//	for (i = 0; i < z; i++)
	{
		for (j = 0; j < z; j++)
		//while (j <= z)
		{
			if (str[i] < str[j])
			{
				tmp[i] = str[i];
				str[i] = str[j];
				str[j] = tmp[i];
			}
//			j++;
		}
//		n++;
	}
	return (str);
}

int main()
{
	unsigned long long n;

	n = 123456789;
	printf("%hhd\n", *descendingOrder(n));
	return 0;
}


//#include <criterion/criterion.h>
//#include <inttypes.h>
//
//uint64_t descendingOrder(uint64_t a);
//
//Test(descendingOrder, should_work_on_several_examples) {
//	cr_assert_eq(descendingOrder(0), 0);
//	cr_assert_eq(descendingOrder(1), 1);
//	cr_assert_eq(descendingOrder(15), 51);
//	cr_assert_eq(descendingOrder(1021), 2110);
//	cr_assert_eq(descendingOrder(123456789), 987654321);
//}