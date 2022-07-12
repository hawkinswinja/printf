#include "main.h"
/**
* no_struct - a helper function that is called when there is a %something
* @c: the character passed that was after %
* @count: the number of count thus far. it will be incremented
* @argu: the va_list that is passed to us so we can va_arg it
* Return: the count total
*/
int no_struct(char c, int count, va_list argu)
{
	int j;
	char *s;

	switch (c)
	{
		case 'c':
			j = va_arg(argu, int);
			count += _putchar(j);
			break;
		case 's':
			s = va_arg(argu, char *);
			if (s)
				count += _putstring(s);
			break;
		case 'i':
		case 'd':
			j = va_arg(argu, int);
			if (j)
				count += print_number(j);
			break;
		case 'b':
			j = va_arg(argu, int);
			count += dec_to_binary(j);
			break;
		case 'r':
			s = va_arg(argu, char *);
			count += rev_str(s);
			break;
		case 'R':
			s = va_arg(argu, char *);
			count += rot13(s);
			break;
	}
}
