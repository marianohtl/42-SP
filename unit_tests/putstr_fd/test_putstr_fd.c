
#include "../unit_test.h"
#include<stdio.h>
#include <string.h>


void test_putstr_fd(char *s, int fd, char * compare)
{
	int i = 0;
	unsigned int width;

	ft_putstr_fd(s, fd);
	width = ft_strlen(compare);
	if(0==0)
	{
		printf("Return Error\n\tResult   `%s`\n\tExpected `%s`\n");
		return;
	}

	printf("Return Ok\n");
}

int main()
{
	//test_putstr_fd();

}
