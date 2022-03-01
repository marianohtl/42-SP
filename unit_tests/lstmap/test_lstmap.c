
#include "../unit_test.h"
#include<stdio.h>
#include <string.h>

void test_lstmap(t_list *lst, void *(*f)(void*),void(*del)(void*), t_list *compare)
{
	t_list *result;
	int i = 0;
	unsigned int width;

	result = ft_lstmap(lst,f,del);
	if (result == NULL && compare != NULL)
	{
		printf("Return failed malloc\n");
		return ;
	}
	while (compare != NULL)
 {
		if(ft_strncmp(result->content,compare->content,ft_strlen(compare->content)) != 0 || ((char *)(result->content))[ft_strlen(compare->content)] != '\0')
		{
			printf("Return Error\n\tResult   `%s`\n\tExpected `%s`\n", (char *)result->content, (char *)compare->content);
			return;
		}
		result = result->next;
		compare = compare->next;
	}
	if (result != NULL)
	{
		printf("Return NULL Error\n");
		return ;
	}


	printf("Return Ok\n");
}
void	*str_to_a(void *content)
{
	char	*string;
	int		index;

	string = ft_strdup(content);
	index = 0;
	while (string[index] != '\0')
	{
		string[index] = 'a';
		index++;
	}
	return (string);
}

void	*str_plus_one(void *content)
{
	char	*string;
	int		index;

	string = ft_strdup(content);
	index = 0;
	while (string[index] != '\0')
	{
		string[index] += 1;
		index++;
	}
	return (string);
}
void    to_a_str(void *content)
{
    char    *string;
    int        index;

    string = content;
    while (string[index] != '\0')
    {
        string[index] = 'a';
        index++;
    }
}
int	main(void)
{
	t_list	*lst0;
	t_list	*lst1;
	t_list	*compare0;
	t_list	*compare1;
	t_list	*compare2;
	int		index;
	char	*input[] = {"Eu quero ver voce", "me chamar de amendoim", "Lagartixa", "tixastixa", "Gatinhos", "tinhos", NULL};
	char	*compare_a[] = {"aaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaa", "aaaaaaaaa", "aaaaaaaa", "aaaaaa", NULL};
	char	*compare_plus_one[] = {"Fv!rvfsp!wfs!wpdf", "nf!dibnbs!ef!bnfoepjn", "Mbhbsujyb", "ujybtujyb", "Hbujoipt", "ujoipt", NULL};

	index = 0;
	lst0 = NULL;
	compare0 = NULL;
	compare1 = NULL;
	while (input[index] != NULL)
	{
		ft_lstadd_back(&lst0, ft_lstnew(input[index]));
		ft_lstadd_back(&compare0, ft_lstnew(compare_plus_one[index]));
		ft_lstadd_back(&compare1, ft_lstnew(compare_a[index]));
		index++;
	}
	lst1 = lst0->next->next;
	compare2 = compare0->next->next;
	test_lstmap(lst0, str_plus_one, to_a_str, compare0);
	test_lstmap(lst0, str_to_a, to_a_str, compare1);
	test_lstmap(lst1, str_plus_one, to_a_str, compare2);
	test_lstmap(NULL, str_plus_one, to_a_str, NULL);
}
