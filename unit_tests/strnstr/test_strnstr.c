#include "../unit_test.h"
#include<stdio.h>
#include<string.h>

void test_strnstr(const char * big, const char *little,unsigned int len)
{
	int i;

	char *result = (char*)ft_strnstr();
	char *expected = (char*)strnstr();

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
	test_strnstr();
	test_strnstr();
	test_strnstr();
}
