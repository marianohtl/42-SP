#include"libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if(lst == (void *) 0){
		return(*lst = new);
	}else{
		(*lst)->content =
	}
}

void main(void)
{
	t_list **biglst;
	t_list *lst;
	biglst = malloc(sizeof(t_list *));
	lst = malloc(sizeof(t_list));
	lst->content = "babababababa";
	ft_lstadd_front(biglst, lst);
}
