#include <string.h>

char * ft_strchr (const char *string, int c)
{
	unsigned int index;
	char convert_c;
	char *occurrency;

	convert_c = (char) c;
	index = 0;
	while (string[index])
	{
		if (string[index] == convert_c)
		{
			occurrency = &string[index];
			return(occurrency);
		}
		index++;
	}
	return((char *) 0);
}

int main(void)
{
	char * my_function;
	char * my_test;
	my_function = ft_strchr("Hello There!", '!');
	my_test = strchr("Hello There!", '!');
	my_function = ft_strchr("Hello There!", 'e');
	my_test = strchr("Hello There!", 'e');
	my_function = ft_strchr("Hello There!", 'l');
	my_test = strchr("Hello There!", 'l');
	my_function = ft_strchr("Hello There!", 'h');
	my_test = strchr("Hello There!", 'h');
	my_function = ft_strchr("Hello There!", 'z');
	my_test = strchr("Hello There!", 'z');
	my_function = ft_strchr("Hello There!", ' ');
	my_test = strchr("Hello There!", ' ');
}
