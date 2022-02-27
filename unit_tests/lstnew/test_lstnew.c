
#include "../unit_test.h"
#include<stdio.h>
#include <string.h>


void test_lstnew(void *content,int (*f)(void *,void *), void *compare)
{
	int i = 0;
	unsigned int width;
	t_list *list;
	list = ft_lstnew(content);

	if(f(list->content, compare) != 0 ){
		printf("Return Content Error");
		return;
	}
	if(list->next != NULL)
	{
		printf("Return Next Address Error");
		return;
	}

	printf("Return Ok\n");
}
int	to_int(void *result, void *compare)
{
	return (*((int *) result) - *((int *) compare));
}

int	to_char(void *result, void *compare)
{
	return (*((char *) result) - *((char *) compare));
}

int	to_string(void *result, void *compare)
{
	return (ft_strncmp(result, compare,ft_strlen(compare)));;
}

int	main(void)
{

	int ft = 42;
	int ft2 = 42;
	test_lstnew(&ft, to_int, &ft2);
	test_lstnew("J", to_char, "J");
	test_lstnew("Amendoim", to_string, "Amendoim");
}
