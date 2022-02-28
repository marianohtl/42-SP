
#include "../unit_test.h"
#include<stdio.h>
#include <string.h>


void test_lstiter(t_list *lst, void (*f)(void*), t_list * compare)
{
	int i = 0;
	unsigned int width;

	ft_lstiter(lst,f);

	while(lst != (void *)0)
	{
		if(ft_strncmp(lst->content, compare->content, ft_strlen(compare->content)) != 0)
		{
			printf("Return Error\n\tResult   `%s`\n\tExpected `%s`\n", (char *)lst->content, (char *)compare->content);
		}
		compare = compare->next;
		lst = lst->next;
	}
	if(lst != compare)
		printf("Return Null Error\n");

	printf("Return Ok\n");
}

void a(void *content)
{
	((char*)content)[0] = 'a';
	((char*)content)[1] = '\0';
}

void	plus_one(void *content)
{
	char * aux;
	int i;
	aux = content;
	i = 0;
	while (aux[i])
	{
		aux[i] = aux[i] + 1;
		i++;
	}
}

int	main(void)
{
	t_list *lst, *new, *compare, *lst_a;
	int i;
	char *content_lst[] = {"Eu"," quero ","ver,"," voce ","me", " chamar ","de"," AMENDOIM. ", NULL};
	char *content_compare[] = {"Fv","!rvfsp!","wfs-","!wpdf!","nf", "!dibnbs!","ef","!BNFOEPJN/!", NULL};
	lst = ft_lstnew(ft_strdup(content_lst[0]));
	compare = ft_lstnew(content_compare[0]);
	i=1;
	while (content_lst[i] != NULL)
	{
		ft_lstadd_back(&lst, ft_lstnew(ft_strdup(content_lst[i])));
		i++;
	}
	i=1;
	while (content_compare[i] != NULL)
	{
		ft_lstadd_back(&compare,ft_lstnew(content_compare[i]));
		i++;
	}
	lst_a = ft_lstnew("a");
	i=1;
	while (content_compare[i] != NULL)
	{
		ft_lstadd_back(&lst_a,ft_lstnew("a"));
		i++;
	}
	test_lstiter(lst, plus_one, compare);
	test_lstiter(lst, a, lst_a);
}

