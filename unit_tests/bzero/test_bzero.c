#include "../unit_test.h"
#include<stdio.h>
#include<string.h>

void test_bzero(void *s, unsigned int n)
{
	char str[100];
	int i;
	str[0] = 'Y';
	((char *)s)[0] = 'Y';
	i = 0;

	ft_bzero(s, n);
	char *result = s;
	bzero(str, n);
	char *expected = str;

	if((n == 0) && (result[i] != expected[i]))
	{
		printf("Return Error\n\tResult   %c\n\tExpected %c\n", result[i], expected[i]);
		return;
	}

	while (i < n)
	{
		if(result[i] != expected[i])
		{
			printf("Return Error\n\tResult   %c\n\tExpected %c\n", result[i], expected[i]);
			return;
		}
		i++;
	}
	printf("Return Ok\n");
}

int main()
{
	char f_str[100];
	char s_str[100];
	char t_str[100];

	test_bzero(f_str, 100);
	test_bzero(s_str, 0);
	test_bzero(t_str, 42);
}
