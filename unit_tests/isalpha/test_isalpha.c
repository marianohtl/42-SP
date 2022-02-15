#include "../unit_test.h"
#include<stdio.h>
#include<ctype.h>

void test_alpha(int c)
{
	int result = ft_isalpha(c);
	int expected = isalpha(c);
	if(result == expected)
	{
		printf("Return Ok\n");
	}else{
		printf("Return Error\n\tResult   %d\n\tExpected %d\n", result, expected );
	}
}

int main()
{
	int i;
	i = 0;

	//go through ascii table
	while(i < 128)
	{
		test_alpha(i);
		i++;
	}
	test_alpha(257);
	test_alpha(-42);
}
