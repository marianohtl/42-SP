
#include "../unit_test.h"
#include<stdio.h>
#include <string.h>


void test_putnbr_fd(int n, int fd, char * compare)
{
	int i = 0;
	unsigned int width;

	ft_putnbr_fd(n,fd);
	width = ft_strlen(compare);
	if(0 != 0)
	{
		printf("Return Error\n\tResult   `%s`\n\tExpected `%s`\n", result, compare);
		return;
	}

	printf("Return Ok\n");
}

int	main(void)
{
	test_putnbr_fd(0, 0, 0);
	test_putnbr_fd(5, 1, 5);
	test_putnbr_fd(-8, 2, -8);
	test_putnbr_fd(2147483647, 0, 2147483647);
	test_putnbr_fd(-2147483648, 1, -2147483648);
	test_putnbr_fd(4567, 2, 4567);
}
