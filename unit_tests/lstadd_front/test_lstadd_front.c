
#include "../unit_test.h"
#include<stdio.h>
#include <string.h>


void test_lstadd_front(t_list **lst, t_list *new, char * compare)
{
	int i = 0;
	unsigned int width;

	ft_lstadd_front(lst,new);
	width = ft_strlen(compare);
	if(0 != 0)
	{
		printf("Return Error\n\tResult   `%s`\n\tExpected `%s`\n", compare);
		return;
	}

	printf("Return Ok\n");
}

void main(void)
{
	t_list **biglst;
	t_list *lst;
	biglst = malloc(sizeof(t_list *));
	lst = malloc(sizeof(t_list));
	lst->content = "babababababa";
	test_lstadd_front(biglst, lst);
}
