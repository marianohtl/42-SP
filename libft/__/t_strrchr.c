#include <string.h>

char * ft_strrchr (const char *string, int c)
{
	unsigned int index;
	unsigned int length;
	char convert_c;

	index = 0;
	while (string[index])
		index++;

	length = index;
	index = 0;
	convert_c = (char) c;
	while (string[index])
	{
		if (string[length] == convert_c)
			return(&string[length]);

		length--;
		index++;
	}
	return((char *) 0);
}

int main(void)
{
	char * my_function;
	char * my_test;
	my_function = ft_strrchr("Hello There!", '!');
	my_test = strrchr("Hello There!", '!');
	my_function = ft_strrchr("Hello There!", 'e');
	my_test = strrchr("Hello There!", 'e');
	my_function = ft_strrchr("Hello There!", 'l');
	my_test = strrchr("Hello There!", 'l');
	my_function = ft_strrchr("Hello There!", 'h');
	my_test = strrchr("Hello There!", 'h');
	my_function = ft_strrchr("Hello There!", 'z');
	my_test = strrchr("Hello There!", 'z');
	my_function = ft_strrchr("Hello There!", ' ');
	my_test = strrchr("Hello There!", ' ');
}
