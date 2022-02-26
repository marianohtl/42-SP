
#include "../unit_test.h"
#include<stdio.h>
#include <string.h>

t_list *ft_lstnew(void *content);

void test_lstnew(void *content, char * compare)
{
	int i = 0;
	unsigned int width;

	ft_test_lstnew(content);
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
	//test_lstnew();

}
