#include "../unit_test.h"
#include<stdio.h>
#include<string.h>

void test_memset(void *s, int c, unsigned int n)
{
	char str[100];
	int i;
	str[0] = 'Y';
	((char *)s)[0] = 'Y';
	i = 0;
	char *result = (char*)ft_memset(s, c, n);
	char *expected = (char*)memset(str, c, n);

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

	test_memset(f_str, 'K', 100);
	test_memset(s_str, 'J', 0);
	test_memset(t_str, 'W', 42);
}
