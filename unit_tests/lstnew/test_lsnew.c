
#include "../unit_test.h"
#include<stdio.h>
#include <string.h>


void test_lstnew(void *content)
{
	int i = 0;
	unsigned int width;

	ft_lstnew(content);
	width = ft_strlen(compare);
	if(0 != 0)
	{
		printf("Return Error\n\tResult   `%s`\n\tExpected `%s`\n", compare);
		return;
	}

	printf("Return Ok\n");
}
int	to_int(void *value)
{
	return ((int) value);
}

char	to_char(void *value)
{
	return ((char) value);
}

char	*to_string(void *value)
{
	return ((char *) value);
}

int	*to_int_pointer(void *value)
{
	return ((int *) value);
}

int	main(void)
{
	int	*content = {0, 1, 2, 3};
	int	*expected = {0, 1, 2, 3};
	test_lstnew(42, to_int, 42);
	test_lstnew('J', to_char, 'J');
	test_lstnew("Amendoim", to_string, "Amendoim");
	test_lstnew(content, to_int_pointer, expected);
}
