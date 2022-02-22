#include"libft.h"

void ft_lstclear(t_list **lst, void (*del) (void*)){
	t_list *next_element, *current_element;
	next_element = *lst;
	while (next_element->next != (void*)0)
	{
		del(next_element->content);
		next_element = next_element->next;
		current_element = next_element;
		free(current_element);
	}
	lst = ((void*)0);
}
