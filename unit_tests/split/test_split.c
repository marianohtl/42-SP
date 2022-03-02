#include "../unit_test.h"
#include<stdio.h>
#include <string.h>
#include <stdlib.h>

void test_split(char const *s, char c, char **compare)
{
	int i = 0;

	char **result =  ft_split(s, c);
	if(result == NULL)
	{
		printf("Return fail to allocate\n");
		return ;
	}
	while (compare[i] != ((void *) 0))
	{
		if(result[i] == NULL || ft_strncmp(compare[i], result[i], ft_strlen(compare[i])) != 0)
		{
			printf("Return Error\n\tResult   `%s`\n\tExpected `%s`\n",
			 result[i], compare[i]);
			 return;
		}
		free(result[i]);
		i++;
	}
	printf("Return Ok\n");
}

int	main(void)
{
	char *expected0[] = {"Eu", "quero", "ver", "voce", "me", "chamar", "de", "amendoim\n", ((void *) 0)};
	char	*expected1[] = {"Lagartixa\t", "tixa\n", "tixas.", ((void *) 0)};
	char	*expected2[] = {"",((void *) 0)};
	char	*expected3[] = {"Gatinhoszinhos", ((void *) 0)};

	ft_split("  tripouille  42  ", ' ');
	test_split("Eu quero ver voce me chamar de amendoim\n", ' ', expected0);
	test_split("     Eu   quero    ver        voce  me    chamar   de     amendoim\n           ", ' ', expected0);
	test_split("Lagartixa\t@tixa\n@tixas.", '@', expected1);
	test_split("", '\n', expected2);
	test_split("Gatinhoszinhos", '\n', expected3);


}
