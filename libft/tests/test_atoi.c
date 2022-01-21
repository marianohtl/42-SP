#include <stdlib.h>
#include <stdio.h>
#include "./t_atoi.c"
#include <unistd.h>

void print_escape(const char *input)
{
	unsigned int index;

	index = 0;
	write(1, "Input: \"", 8);
	while (input[index])
	{
		if (input[index] == '\f')
		{
			write(1, "\\f", 2);
		}
		else if (input[index] == '\n')
		{
			write(1, "\\n", 2);
		}
		else if (input[index] == '\r')
		{
			write(1, "\\r", 2);
		}
		else if (input[index] == '\t')
		{
			write(1, "\\t", 2);
		}
		else if (input[index] == '\v')
		{
			write(1, "\\v", 2);
		}
		else
		{
			write(1, &input[index], 1);
		}
		index++;
	}
	write(1, "\"", 1);
}

void test(const char *input)
{
	int current;
	int expected;

	current = ft_atoi(input);
	expected = atoi(input);
	if (current != expected)
	{
		print_escape(input);
		printf(" | Minha: %d | Original: %d\n", current, expected);
	}
}

int main(void)
{
	test("42");
	test("-10");
	test("+35");
	test(" \f\n\r\t\v6987");
	test("  \f\f\n\n\r\r\t\t\v\v \f\n\r\t\v42");
	test("  \f\f\n\n\r\r\t\t\v\v \f\n\r\t\v+42");
	test("  \f\f\n\n\r\r\t\t\v\v \f\n\r\t\v-42");
	test("  \f\f\n\n\r\r\t\t\v\v \f\n\r\t\v--42");
	test("  \f\f\n\n\r\r\t\t\v\v \f\n\r\t\v++42");
	test("  \f\f\n\n\r\r\t\t\v\v \f\n\r\t\v+-42");
	test("\f      \f");
	test("\n\n\t+ 42");
	test("\n\n\t-4 2");
	test("hello there +42");
	test("");
	test("-2147483648");
	test("+2147483648");
	test("2147483648");
	test("2147483647");
	test("4294967168");
	test("    +0000042");
	test("+++++++42");

	return (0);
}
