#include"libft.h"

t_list	*ft_lstlast(t_list *list)
{
	t_list	*lstlast;

	lstlast = list;
	if (list == NULL)
		return (NULL);
	while (lstlast->next != NULL)
	{
		lstlast = lstlast->next;
	}
	return (lstlast);
}
