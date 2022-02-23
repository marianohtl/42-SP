#include "../unit_test.h"
#include<stdio.h>
#include<ctype.h>

void test_toupper(int c)
{
	int result = ft_toupper(c);
	int expected = toupper(c);

	if(result != expected)
	{
		printf("Return Error\n\tResult   %d\n\tExpected %d\n", result, expected);
		return;
	}
	printf("Return Ok\n");
}

int main()
{
	test_toupper('a');
	test_toupper('z');
	test_toupper('p');
	test_toupper('A');
	test_toupper('Z');
	test_toupper('Y');
	test_toupper(2);
	test_toupper('7');
	test_toupper('\t');
	test_toupper('&');
	test_toupper('\0');
}
