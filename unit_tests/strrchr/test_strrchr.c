#include "../unit_test.h"
#include<stdio.h>
#include<string.h>

void test_strrchr(const char *string, int c)
{

	char *result =  ft_strrchr(string, c);
	char *expected =  strrchr(string, c);

	if(result != expected)
	{
		printf("Return Error\n\tResult   `%s`\n\tExpected `%s`\n", result, expected);
		return;
	}

	printf("Return Ok\n");
}

int main()
{
	test_strrchr("aatropelei", 'a');
	test_strrchr("banananu", 'a');
	test_strrchr("banananu", 'A');
	test_strrchr("banananu", '\0');
	test_strrchr("banananu", 165);
	test_strrchr(" ", 'z');
	test_strrchr("", 'z');
}
