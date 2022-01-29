#include <stdlib.h>

char *ft_strdup(const char *s)
{
	char *result;
	int index, size;
	size = 0;
	index = 0;
	while(s[index] != '\0')
	{
		index++;
		size++;
	}

	result = malloc(size);
	index = 0;
	while(s[index] != '\0')
	{
		result[index] = s[index];
		index++;
	}
	result[index] = '\0';
	return result[0];
}


char *ft_itoa(int n){

	char *number, signal;
	int numerator, index, dgt;

	signal = 0;

	if(n == -2147483648)
	{
		number = ft_strdup("-2147483648");
		return(number);
	}
	if(n == 0){
		number = ft_strdup("0");
		return(number);
	}


	if(n < 0)
	{
		n *= -1;
		signal = 1;
	}

	dgt = 0;
	numerator = n;
	while(numerator > 9)
	{
		numerator = numerator / 10;
		dgt++;
	}

	number = malloc(dgt + 1 + signal);
	number[dgt + signal] = '\0';
	dgt--;
	while (dgt >= 0)
	{
		number[dgt + signal] = n % 10 + '0';
		n = n / 10;
		dgt--;
	}
	if(signal == 1)
		number[dgt + 1] = '-';

	return(number);
}
