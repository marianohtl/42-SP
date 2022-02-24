#include "../unit_test.h"
#include<stdio.h>
#include<string.h>

void test_memchr(const void *s, int c, unsigned int n)
{
	int i;

	char *result = (char*) ft_memchr(s, c, n);
	char *expected = (char*) memchr(s, c, n);

	if(result != expected)
	{
		printf("Return Error\n\tResult   `%s`\n\tExpected `%s`\n", result, expected);
		return;
	}

	printf("Return Ok\n");
}

int main()
{
	int test[4] = {1,4,3,7};
	test_memchr("meu teste", 't', 10);
	test_memchr("meu teste", 't', 4);
	test_memchr(test, 4, 16);
	test_memchr(test, 4, 8);
	test_memchr(test, 4, 2);
	test_memchr("em uma string qualquer", 2000, 23);
	test_memchr("em uma string qualquer", 'u', 0);
}
