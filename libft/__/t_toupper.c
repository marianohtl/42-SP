#include <ctype.h>

int ft_toupper(int c)
{
	int new_character;

	new_character = c;
	if(c >= 'a' && c <= 'z')
	{
		new_character = c - 32;
	}
	return(new_character);
}

int main(void)
{
	int character;
	int character2;

	character = ft_toupper('b');
	character2 = toupper('b');

	character = ft_toupper('\0');
	character2 = toupper('\0');


	character = ft_toupper('S');
	character2 = toupper('S');

	character = ft_toupper('#');
	character2 = toupper('#');

	character = ft_toupper('u');
	character2 = toupper('u');

	character = ft_toupper(135);
	character2 = toupper(135);
}

