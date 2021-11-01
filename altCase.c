char *alternateCase (char *string)
{
	int i;

	i = 0;
	while (string[i] != '\0')
	{
		if (string[i] > 'a' && string[i] < 'z')
			string[i] -= 32;
		else if (string[i] > 'A' && string[i] < 'Z')
			string[i] += 32;
		i++
	}
}