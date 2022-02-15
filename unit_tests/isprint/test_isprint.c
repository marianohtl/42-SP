#include "../unit_test.h"
#include<stdio.h>
#include<ctype.h>

void test_isprint(int c)
{
	int result = ft_isprint(c);
	int expected = isprint(c);
	if(result != expected){
		printf("Return Error\n\tResult   %d\n\tExpected %d\n", result, expected );
		return;
	}
	printf("Return Ok\n");
}

void main()
{
	int i;
	i = 0;
	while (i < 128)
	{
		test_isprint(i);
		i++;
	}
	test_isprint(257);
	test_isprint(-42);

}
