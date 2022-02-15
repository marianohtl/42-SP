#include "../unit_test.h"
#include<stdio.h>
#include<ctype.h>

void test_isascii(int c)
{
	int result = ft_isascii(c);
	int expected = __isascii(c);
	if(result != expected)
	{
		printf("Return Error\n\tResult   %d\n\tExpected %d\n", result, expected );
		return;
	}
	printf("Return Ok\n");
}

int main()
{
	int i;
	i = 0;
	//go through ascii table
	while (i < 128)
	{
		test_isascii(i);
		i++;
	}
	test_isascii(258);
	test_isascii(-42);
}
