
#include "../unit_test.h"
#include<stdio.h>
#include <string.h>

void test_lsize(t_list *list, char * compare)
{
	int i = 0;
	unsigned int width;

	ft_lsize(list);
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
	//test_lsize();

}
