#include "../unit_test.h"
#include<stdio.h>
#include<string.h>

void test_strlen(char *s)
{
	size_t result = ft_strlen(s);
	size_t expected = strlen(s);

	if(result != expected){
		printf("Return Error\n\tResult   %lu\n\tExpected %lu\n", result, expected );
		return;
	}
	printf("Return Ok\n");
}

int main()
{
	test_strlen("tatakae");
	test_strlen("");
	test_strlen("nihao\0potato");
}
