unsigned int ft_split(char *nptr)
{
	unsigned int index;

	while(nptr[index] != '\0')
	{
		if(nptr[index]  == ' ' || nptr[index]  == '\f' || nptr[index]  == '\n' || nptr[index]  == '\r' || nptr[index]  == '\v')
		{
			index++;
		}
	}
	return(index);
}

int ft_atoi(const char *nptr)
{
	unsigned int index;
	unsigned int index2;
	unsigned int mult;
	int digit;

	digit = 0;
	mult = 1;
	index2 = 0;
	index = ft_split(nptr);
	if(nptr[index] == '+' || nptr[index] == '-')
		index++;

	while(nptr[index] >= '0' && nptr[index] <= '9')
	{
		index++;
		index2++;
	}
	while (index2 > 0)
	{
		index--;
		digit += nptr[index] * mult;
		mult = mult * 10;
	}
	return(digit);
}
