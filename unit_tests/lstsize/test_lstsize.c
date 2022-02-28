
#include "../unit_test.h"
#include<stdio.h>
#include <string.h>

void test_lstsize(t_list *list, int compare)
{
	int result = ft_lstsize(list);
	if(result != compare)
	{
		printf("Return Error\n\tResult   `%d`\n\tExpected `%d`\n", result, compare);
		return;
	}

	printf("Return Ok\n");
}

int	main(void)
{
	t_list *elements[8];

	// test_lstsize(((void *) 0), 0);
	elements[0] = ft_lstnew("Eu");
	test_lstsize(elements[0], 1);
	elements[1] = ft_lstnew("quero");
	elements[2] = ft_lstnew("ver");
	elements[3] = ft_lstnew("voce");
	elements[0]->next = elements[1];
	elements[1]->next = elements[2];
	elements[2]->next = elements[3];
	test_lstsize(elements[0], 4);
	elements[4] = ft_lstnew("me");
	elements[5] = ft_lstnew("chamar");
	elements[6] = ft_lstnew("de");
	elements[7] = ft_lstnew("amendoim");
	elements[3]->next = elements[4];
	elements[4]->next = elements[5];
	elements[5]->next = elements[6];
	elements[6]->next = elements[7];
	test_lstsize(elements[0], 8);
}
