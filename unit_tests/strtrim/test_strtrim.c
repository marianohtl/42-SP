
#include "../unit_test.h"
#include<stdio.h>
#include <string.h>

void test_strtrim(char const *s1,char const *set, char * compare)
{
	int i = 0;
	unsigned int width;

	char *result =  ft_strtrim(s1,set);
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
	test_strtrim("       amendoim        ", " ","amendoim");
	test_strtrim("banana", "ban","");
	test_strtrim("banana", "ba","nan");
	test_strtrim("banananu", "nu","banana");
	test_strtrim("banananu", "ana","banananu");
	test_strtrim("banananu","", "banananu");
	test_strtrim("gatos","gato","s");
	test_strtrim("banana", "gato","banan");
	test_strtrim("normal","normal","");
	test_strtrim("@@normal@@","@","normal");
	test_strtrim(" algumacoisa   "," ","algumacoisa");
	test_strtrim("    ","","    ");
}
