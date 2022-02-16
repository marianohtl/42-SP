#include "../unit_test.h"
#include<stdio.h>
#include<string.h>

void test_memcpy(void *dest, const void *src, unsigned int n)
{
	char str[100];
	int i;
	str[0] = 'Y';
	((char *)dest)[0] = 'Y';
	i = 0;
	char *result = (char*)ft_memcpy(dest, src, n);
	char *expected = (char*)memcpy(str, src, n);

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

	test_memcpy(f_str, "Tatakae Tatakae Tatakae Tatakae", 31);
	test_memcpy(s_str, "Test", 0);
	test_memcpy(t_str, "Nezuko Chaan", 6);
}
