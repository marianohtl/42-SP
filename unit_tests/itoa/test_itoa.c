
#include "../unit_test.h"
#include<stdio.h>
#include <string.h>

void test_itoa(int n, char * compare)
{
	int i = 0;
	unsigned int width;

	char *result =  ft_itoa(n);
	width = ft_strlen(compare);
	if(ft_strncmp(result, compare, width) != 0)
	{
		printf("Return Error\n\tResult   `%s`\n\tExpected `%s`\n", result, compare);
		return;
	}

	printf("Return Ok\n");
}

int main()
{
	test_itoa(42, "42");
	test_itoa(-2147483648, "-2147483648");
	test_itoa(2147483647, "2147483647");
	test_itoa(0, "0");
	test_itoa(-456, "-456");
}
