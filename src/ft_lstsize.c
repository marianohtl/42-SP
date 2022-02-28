#include"libft.h"

int	ft_lstsize(t_list *lst)
{
	int		length;
	t_list	*aux;

	if (lst == NULL)
		return (0);
	length = 1;
	aux = lst;
	while (aux->next != NULL)
	{
		aux = aux->next;
		length++;
	}
	return (length);
}
