#include "../unit_test.h"
#include<stdio.h>
#include<ctype.h>

void test_digit(int c)
{
	int result = ft_isdigit(c);
	int expected = isdigit(c);
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
	while(i < 128)
	{
		test_digit(i);
		i++;
	}
	test_digit(258);
	test_digit(-42);
}
