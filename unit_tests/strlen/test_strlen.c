#include "../unit_test.h"
#include<stdio.h>
#include<string.h>

void test_strlen(char *s)
{
	int result = ft_strlen(s);
	int expected = strlen(s);

	if(result != expected){
		printf("Return Error\n\tResult   %d\n\tExpected %d\n", result, expected );
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
