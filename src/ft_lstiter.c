#include"libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void*))
{
	t_list	*next_item;

	next_item = lst;
	while (next_item != NULL)
	{
		f(next_item->content);
		next_item = next_item->next;
	}
}
