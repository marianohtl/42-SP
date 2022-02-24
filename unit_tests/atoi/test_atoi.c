#include "../unit_test.h"
#include<stdio.h>
#include<stdlib.h>

void test_atoi(const char *nptr)
{
	int i;

	int result = ft_atoi(nptr);
	int expected = atoi(nptr);


	if(result != expected)
	{
		printf("Return Error\n\tResult   `%d`\n\tExpected `%d`\n", result, expected);
		return;
	}

	printf("Return Ok\n");
}

int main()
{
	test_atoi("42");
	test_atoi("-2147483648") ;
	test_atoi("2147483647");
	test_atoi("0");
	test_atoi("-456");
	test_atoi("      çhjklasdfgçhfsdalhjkfsdahljk-456");
	test_atoi("-456    alsdf    ghçkjalksgdfhj");
	test_atoi("+456");
	test_atoi("456");
	test_atoi("      \n\n\n\n\f\f\f\t\t\t\v\v\r\r\r    -48613asdfa13168165çljkasdfglkhjasdglhkfasdjghkawsdfghjkl");
}
