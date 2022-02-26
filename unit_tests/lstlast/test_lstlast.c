
#include "../unit_test.h"
#include<stdio.h>
#include <string.h>


void test_ft_lstlast(t_list *list, char *compare)
{
	int i = 0;
	unsigned int width;

	ft_ft_lstlast(list);
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
	//test_ft_lstlast();

}
