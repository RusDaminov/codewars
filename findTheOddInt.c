//Given an array of integers, find the one that appears an odd number of times.
//
//There will always be only one integer that appears an odd number of times.
//
//Examples
//[7] should return 7, because it occurs 1 time (which is odd).
//[0] should return 0, because it occurs 1 time (which is odd).
//[1,1,2] should return 2, because it occurs 1 time (which is odd).
//[0,1,0,1,0] should return 0, because it occurs 3 times (which is odd).
//[1,2,2,3,3,3,4,3,3,3,2,2,1] should return 4, because it appears 1 time (which is odd).

#include <stddef.h>
#include <stdio.h>

int find_odd (size_t length, const int array[length])
{
	char *str;
	size_t i;
	size_t j;
	size_t count;

	i = 0;
	count = 0;
	*str = *array;
	while (i < length)
	{
		j = 0;
		while (j < length)
		{

			if (str[i] == str[j])
				count++;
			j++;
		}
		if (count % 2 != 0)
			return (str[i]);
		i++;
	}
	return 0;
}

int main()
{
	size_t l;
	const int arr = {7};
	l = 1;
	printf("%d\n", find_odd(l, *arr));

}