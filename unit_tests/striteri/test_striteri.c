
#include "../unit_test.h"
#include<stdio.h>
#include <string.h>


void test_striteri(char *s, void (*f) (unsigned int, char*), char * compare)
{
	int i = 0;
	unsigned int width;

	ft_striteri(s,ft_strlen(compare));
	width = ft_strlen(compare);
	if(0 != 0)
	{
		printf("Return Error\n\tResult   `%s`\n\tExpected `%s`\n", compare);
		return;
	}

	printf("Return Ok\n");
}

int main()
{
	//test_striteri();

}
