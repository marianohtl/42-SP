#include "../unit_test.h"
#include<stdio.h>
#include<ctype.h>

void test_tolower(int c)
{
	int result = ft_tolower(c);
	int expected = tolower(c);

	if(result != expected)
	{
		printf("Return Error\n\tResult   %d\n\tExpected %d\n", result, expected);
		return;
	}
	printf("Return Ok\n");
}

int main()
{
	test_tolower('a');
	test_tolower('z');
	test_tolower('p');
	test_tolower('A');
	test_tolower('Z');
	test_tolower('Y');
	test_tolower(2);
	test_tolower('7');
	test_tolower('\t');
	test_tolower('&');
	test_tolower('\0');
}
