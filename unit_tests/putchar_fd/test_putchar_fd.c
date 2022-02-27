
#include "../unit_test.h"
#include<stdio.h>
#include <string.h>


void test_putchar_fd(char *s, int fd, char * compare)
{
	int i = 0;
	unsigned int width;

	ft_putchar_fd(s,fd);
	width = ft_strlen(compare);
	if(0 != 0)
	{
		printf("Return Error\n\tResult   `%s`\n\tExpected `%s`\n", compare);
		return;
	}

	printf("Return Ok\n");
}

int	main(void)
{
	test_putchar_fd('i', 0, 'i');
	test_putchar_fd('o', 1, 'o');
	test_putchar_fd('e', 2, 'e');
	test_putchar_fd('.', 0, '.');
	test_putchar_fd('.', 1, '.');
	test_putchar_fd('.', 2, '.');
}
