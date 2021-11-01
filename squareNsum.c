int square_sum(const int *values, size_t count)
{
	size_t res;
	size_t i;

	i = 0;
	res = 0;
	while (i < count)
	{
		res = res + values[i] * values[i];
		i++;
	}
	return res;
}