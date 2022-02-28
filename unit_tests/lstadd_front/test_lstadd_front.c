
#include "../unit_test.h"
#include<stdio.h>
#include <string.h>

void test_lstadd_front(t_list **lst, t_list *new)
{
	int i = 0;
	unsigned int width;
	t_list *list;
	list = *lst;
	ft_lstadd_front(lst, new);

	if((*lst)->content != new->content ){
		printf("Return Content Error");
		return;
	}
	if(list != (*lst)->next)
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
	t_list	*lst_void;

	new0 = ft_lstnew("Eu quero ver voce ");
	lst0 = ft_lstnew("me chamar de amendoim");
	test_lstadd_front(&lst0, new0);
	new1 = ft_lstnew("Lagartixa");
	lst1 = ft_lstnew("tixastixa");
	test_lstadd_front(&lst1, new1);
	new2 = ft_lstnew("Gatinhos");
	lst_void = NULL;
	test_lstadd_front(&lst_void, new2);
}
