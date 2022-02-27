
#include "../unit_test.h"
#include<stdio.h>
#include <string.h>


void test_lstadd_front(t_list **lst, t_list *new)
{
	int i = 0;
	unsigned int width;

	ft_lstadd_front(lst,new);

	if(0 != 0)
	{
		printf("Return Error\n\tResult   `%s`\n\tExpected `%s`\n");
		return;
	}

	printf("Return Ok\n");
}

int	main(void)
{
	t_list	*lst0;
	t_list	*new0;
	t_list	*lst1;
	t_list	*new1;
	t_list	*new2;

	new0 = ft_lstnew("Eu quero ver voce ");
	lst0 = ft_lstnew("me chamar de amendoim");
	test_lstadd_front(lst0, new0);
	new1 = ft_lstnew("Lagartixa");
	lst1 = ft_lstnew("tixastixa");
	test_lstadd_front(lst1, new1);
	new2 = ft_lstnew("Gatinhos");
	test_lstadd_front(((void *) 0), new2);
}
