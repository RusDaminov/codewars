#include <stdio.h>

int *rowWeights(const int weights[], int count, int teams[])
{
	int i;
	int arr[count];

	teams[0] = 0;
	count = 1;
	i = 0;
	while (weights[i] != '\0')
	{
		if (i == 0)
			arr[0] += weights[0];
		else if (count % 2 == 0)
			arr[i] += weights[i];
		else if (count % 2 != 0)
			arr[i] += weights[i];
		i++;
		count++;
	}
	return (arr);
}

int main()
{
	int arr[] = {100, 50};
	int arr2[] = {100, 50};

	printf("%d\n", *rowWeights(arr, 2, arr2));
	return (0);
}
//segfault
