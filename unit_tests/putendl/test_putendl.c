
#include "../unit_test.h"
#include<stdio.h>
#include <string.h>


void test_putendl_fd(int n, int fd, char * compare)
{
	int i = 0;
	unsigned int width;

	ft_putendl_fd(n,fd);
	width = ft_strlen(compare);
	if(ft_strncmp(result, compare, width) != 0)
	{
		printf("Return Error\n\tResult   `%s`\n\tExpected `%s`\n", result, compare);
		return;
	}

	printf("Return Ok\n");
}

int	main(void)
{
	test_putendl_fd("Eu quero ver", 0, "Eu quero ver");
	test_putendl_fd("voce me chamar", 1, "voce me chamar");
	test_putendl_fd("de amendoim", 2, "de amendoim");
	test_putendl_fd(" \\o/", 0, " \\o/");
	test_putendl_fd(" \\o/", 1, " \\o/");
	test_putendl_fd(" \\o/", 2, " \\o/");
}
