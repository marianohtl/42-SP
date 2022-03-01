#include"libft.h"
#include<stdlib.h>

void	ft_lstclear(t_list **lst, void (*del) (void*))
{
	t_list	*element;
	t_list	*element_clean;

	element = *lst;
	while (element != NULL)
	{
		element_clean = element;
		element = element->next;
		ft_lstdelone(element_clean, del);
	}
	*lst = NULL;
}
