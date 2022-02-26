#include "../unit_test.h"
#include<stdio.h>
#include <string.h>


void test_strmapi(char const *s, char(*f)(unsigned int, char), char * compare)
{
	int i = 0;
	unsigned int width;

	char *result =  ft_strmapi(s,ft_strlen(compare));
	width = ft_strlen(compare);
	if(ft_strncmp(result, compare, width) != 0)
	{
		printf("Return Error\n\tResult   `%s`\n\tExpected `%s`\n", result, compare);
		return;
	}

	printf("Return Ok\n");
}

int main()
{
	//test_strmapi();
}
