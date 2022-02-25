#include "../unit_test.h"
#include<stdio.h>
#include <string.h>

void test_strjoin(char const *s1, char const *s2, char * compare)
{
	int i = 0;
	unsigned int width;

	char *result =  ft_strjoin(s1,s2);
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
	test_strjoin("banana", "banana","bananabanana");
	test_strjoin("banananu", "nananu","banananunananu");
	test_strjoin("gatos","gato","gatosgato");
	test_strjoin("normal", "","normal");
	test_strjoin("normal","1","normal1");
	test_strjoin("normal@@","1","normal@@1");
	test_strjoin("","1","1");
	test_strjoin("","","");

}
