
#include "../unit_test.h"
#include<stdio.h>
#include <string.h>


void test_lstadd_back(t_list **lst, t_list *new, char * compare)
{
	int i = 0;
	unsigned int width;

	ft_lstadd_back(lst,new);
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
	//test_lstadd_back();

}
