
#include "../unit_test.h"
#include<stdio.h>
#include <string.h>

void test_split(char const *s, char c, char **campare)
{
	int i = 0;
	unsigned int width;

	char *result =  ft_split( s, c);
	//width = ft_strlen(compare);
	if(ft_strncmp(result, compare, width) != 0)
	{
		printf("Return Error\n\tResult   `%s`\n\tExpected `%s`\n", result, compare);
		return;
	}

	printf("Return Ok\n");
}

int main()
{
	test_split();

}
