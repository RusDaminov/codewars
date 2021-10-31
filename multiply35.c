#include <stdio.h>

int solution(int number)
{
	int i;
	int sum;

	sum = 0;
	i = 0;
	while (i < number)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
		i++;
	}
	return sum;
}

int main()
{
	int n = 10;
	printf("%d\n", solution(n));
	return (0);
}