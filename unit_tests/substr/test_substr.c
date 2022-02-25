#include "../unit_test.h"
#include<stdio.h>
#include <string.h>

void test_substr(char const *s, unsigned int start, unsigned int len, char
*compare)
{
	int i = 0;
	unsigned int width;

	char *result =  ft_substr(s, start, len);
	width = ft_strlen(compare);
	if(ft_strncmp(result, compare, len) != 0)
	{
		printf("Return Error\n\tResult   `%s`\n\tExpected `%s`\n", result, compare);
		return;
	}

	printf("Return Ok\n");
}

int main()
{
	test_substr("banana", 0, 6, "banana");
	test_substr("banananu", 2, 8,"nananu");
	test_substr("banananu", 2, 8,"nananu");
	test_substr("gatos", 0, 4,"gato");
	test_substr("", 0, 1,"");
	test_substr("normal", 80, 3,"");
	test_substr("normal", 1, 0,"");
}
