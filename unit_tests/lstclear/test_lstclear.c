
#include "../unit_test.h"
#include<stdio.h>
#include<stdlib.h>
#include <string.h>

void test_lstclear(t_list **lst, void (*del) (void*))
{
	int i = 0;
	unsigned int width;

	ft_lstclear(lst,del);
	printf("Return Ok\n");
}

void del_with_a(void *s)
{
	int i;
	i = 0;
	while (((char *)s)[i])
	{
		((char *)s)[i] = 'a';
		i++;
	}
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
	//test_lstclear(&new2, del_with_a);
	//test_lstclear(&lst1, del_with_a);
	test_lstclear(&lst0, del_with_a);
	test_lstclear(((void *) 0), del_with_a);
}
