#include"libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void*),void(*del)(void*))
{
	t_list *nxt_lst, *current_lst, *previous_lst, *copy_lst;
	nxt_lst = lst;
	previous_lst = ((void*)0);
	while (nxt_lst->next != (void*)0)
	{
		current_lst = malloc(sizeof(t_list));
		current_lst->content = f(nxt_lst->content);
		if(previous_lst == (void*)0)
		{
			copy_lst = current_lst;
			previous_lst = current_lst;
		}else{
			previous_lst->next = current_lst;
		}
		nxt_lst= nxt_lst->next;
	}
	return(copy_lst);
}
