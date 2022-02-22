int ft_memcmp(const void *s1, const void *s2, unsigned int size)
{
	unsigned int index;
	char * converted_s1;
	char * converted_s2;

	converted_s1 = (char *) s1;
	converted_s2 = (char *) s2;
	index = 0;
	while (index < size)
	{
		if(converted_s1[index] != converted_s2[index])
		{
			return((int) (converted_s1[index] - converted_s2[index]));
		}
		index++;
	}
	return(0);
}
