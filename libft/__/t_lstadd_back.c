#include"libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last_lst;
	last_lst = *lst;

	if(lst == (void*)0){
		*lst = new;
		return;
	}

	while (last_lst->next != ((void*)0))
	{
		last_lst = last_lst->next;
	}
	last_lst->next = new;

}
