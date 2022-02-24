#include "../unit_test.h"
#include<stdio.h>
#include<string.h>

void test_strchr(const char *string, int c)
{

	char *result =  ft_strchr(string, c);
	char *expected =  strchr(string, c);

	if(result != expected)
	{
		printf("Return Error\n\tResult   `%s`\n\tExpected `%s`\n", result, expected);
		return;
	}

	printf("Return Ok\n");
}

int main()
{

	test_strchr("banananu", 'a');
	test_strchr("banananu", 'A');
	test_strchr("banananu", '\0');
	test_strchr("banananu", 165);
	test_strchr(" ", 'z');
	test_strchr("", 'z');

}
