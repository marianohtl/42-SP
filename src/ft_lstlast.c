#include"libft.h"

t_list *ft_lstlast(t_list *list)
{
	t_list *lstlast;

	lstlast = list;

	if(list == ((void*)0))
		return ((void*)0);

	while (lstlast->next != ((void*)0) )
	{
		lstlast = lstlast->next;
	}
	return lstlast;
}
