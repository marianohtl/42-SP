
#include "../unit_test.h"
#include<stdio.h>
#include <string.h>

void test_lstadd_back(t_list **lst, t_list *new)
{
	int i = 0;
	unsigned int width;
	t_list *list, * last;
	last = ft_lstlast(*lst);
	list = *lst;
	ft_lstadd_back(lst, new);

	if(last->content != new->content ){
		printf("Return Content Error");
		return;
	}
	if(NULL != last->next)
	{
		printf("Return Next Address Error");
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
	test_lstadd_back(&lst0, new0);
	lst1 = ft_lstnew("Lagartixa");
	new1 = ft_lstnew("tixastixa");
	test_lstadd_back(&lst1, new1);
	new2 = ft_lstnew("Gatinhos");
	test_lstadd_back(((void *) 0), new2);
}
