#include <ctype.h>

int ft_tolower(int c)
{
	int new_character;

	new_character = c;
	if(c >= 'A' && c <= 'Z')
	{
		new_character = c + 32;
	}
	return(new_character);
}

int main(void)
{
	int character;
	int character2;

	character = ft_tolower('b');
	character2 = tolower('b');

	character = ft_tolower('\0');
	character2 = tolower('\0');


	character = ft_tolower('S');
	character2 = tolower('S');

	character = ft_tolower('#');
	character2 = tolower('#');

	character = ft_tolower('u');
	character2 = tolower('u');

	character = ft_tolower(128);
	character2 = tolower(128);
}

