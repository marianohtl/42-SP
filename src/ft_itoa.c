
/* ********************************************************************************* */
/*                                                                  /\_____/\        */
/*   ft_itoa.c                                                     /  o   o  \       */
/*                                                                ( ==  ^  == )      */
/*   Re-code the function itoa.                                    )         (       */
/*   These function do not need any external functions.           (           )      */
/*                                                               ( (  )   (  ) )     */
/*                                                              (__(__)___(__)__)    */
/*                                                                                   */
/* ********************************************************************************* */
/*
   ft_itoa.c

Parameters
#1 The integer to convert.

Return Value
The string representing the integer. NULL if the allocation fails.

External Functions
malloc

Description
Allocates (with mallloc(3)) and returns a string representing the integer
received as an argument. Negative numbers must be handled.
*/
#include <stdlib.h>
#include"libft.h"

int	ft_get_digit(int numerator)
{
	int	digit;

	digit = 1;
	while (numerator > 9)
	{
		numerator = numerator / 10;
		digit++;
	}
	return (digit);
}

void	ft_make_char_number(int n, char *number, int digit, char signal)
{
	number[digit] = '\0';
	digit--;
	while (digit >= 0)
	{
		number[digit] = n % 10 + '0';
		n = n / 10;
		digit--;
	}
	if (signal == 1)
		number[digit + 1] = '-';
}

char	*ft_itoa(int n)
{
	char	*number;
	char	signal;
	int		digit;

	signal = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
	{
		n *= -1;
		signal = 1;
	}
	digit = ft_get_digit(n) + signal;
	number = malloc(digit + 1);
	if (number == NULL)
		return (number);
	ft_make_char_number(n, number, digit, signal);
	return (number);
}
