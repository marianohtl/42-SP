/* ********************************************************************************* */
/*                                                                  /\_____/\        */
/*   ft_atoi.c                                                     /  o   o  \       */
/*                                                                ( ==  ^  == )      */
/*   Re-code the function atoi.                                    )         (       */
/*   These function do not need any external functions.           (           )      */
/*                                                               ( (  )   (  ) )     */
/*                                                              (__(__)___(__)__)    */
/*                                                                                   */
/* ********************************************************************************* */
/*

*/

unsigned int ft_split_atoi(const char *nptr)
{
	unsigned int index;
	index = 0;
	while(nptr[index]  == ' ' || nptr[index]  == '\f' || nptr[index]  == '\n' || nptr[index]  == '\r' || nptr[index]  == '\v' || nptr[index]  == '\t')
	{
			index++;
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

	index = ft_split_atoi(nptr);
	if(nptr[index] == '+' || nptr[index] == '-')
	{
		if( nptr[index] == '-')
			mult = mult * -1;
		index++;
	}
	index2 = index;
	while(nptr[index2] >= '0' && nptr[index2] <= '9')
		index2++;

	while (index2 > index)
	{
		index2--;
		digit += (nptr[index2] - '0') * mult;
		mult = mult * 10;
	}
	return(digit);
}
