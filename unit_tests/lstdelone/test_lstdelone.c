
#include "../unit_test.h"
#include<stdio.h>
#include <string.h>
#include<stdlib.h>


void test_lstdelone(t_list *lst, void (*del) (void *))
{
	int i = 0;
	unsigned int width;

	ft_lstdelone(lst,ft_strlen(width));

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

	lst0 = ft_lstnew("Eu quero ver voce ");
	new0 = ft_lstnew("me chamar de amendoim");
	lst1 = ft_lstnew("Lagartixa");
	new1 = ft_lstnew("tixastixa");
	new2 = ft_lstnew("Gatinhos");
	lst0->next = new0;
	new0->next = lst1;
	lst1->next = new1;
	new1->next = new2;
	test_lstdelone(lst0, free);
	test_lstdelone(lst1, free);
	test_lstdelone(new2, free);
	test_lstdelone(((void *) 0), free);
}
