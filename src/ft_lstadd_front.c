#include"libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if(lst == ((void*)0)){
		*lst = new;
		return;
	}
	new -> next = *lst;
	lst = new;
}
