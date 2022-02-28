#include"libft.h"
#include<unistd.h>

int	ft_get_digit_fd(int numerator)
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

void	ft_make_char_number_fd(int n, char *number, int digit, char signal)
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

void	ft_putnbr_fd(int n, int fd)
{
	char	number[12];
	char	signal;
	int		index;
	int		digit;

	signal = 0;
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		n *= -1;
		signal = 1;
	}
	digit = ft_get_digit_fd(n) + signal;
	ft_make_char_number_fd(n, number, digit, signal);
	ft_putstr_fd(number, fd);
}
