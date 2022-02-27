
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

int	main(void)
{
	char **expected0[] = {"Eu", "quero", "ver", "voce", "me", "chamar", "de", "amendoim\n", ((void *) 0)};
	char	**expected1[] = {"Lagartixa\t", "tixa\n", "tixas.", ((void *) 0)};
	char	**expected2[] = {((void *) 0)};
	char	**expected3[] = {"Gatinhoszinhos", ((void *) 0)};

	test_split("Eu quero ver voce me chamar de amendoim\n", ' ', expected0);
	test_split("Lagartixa\t@tixa\n@tixas.", '@', expected1);
	test_split("", '\n', expected2);
	test_split("Gatinhoszinhos", '\n', expected3);
}
