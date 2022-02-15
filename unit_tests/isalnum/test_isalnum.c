#include "../unit_test.h"
#include<stdio.h>
#include<ctype.h>

void test_isalnum(int c)
{
	int result = ft_isalnum(c);
	int expected = isalnum(c);
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
	while (i < 128)
	{
		test_isalnum(i);
		i++;
	}
	test_isalnum(257);
	test_isalnum(-42);

}
