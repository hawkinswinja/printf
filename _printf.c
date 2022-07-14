#include <stdarg.h>
#include "main.h"
#include <stdio.h>

int _printf(const char *format, ...)
{
	int n = 0, i;
	va_list data;
	va_start(data, format);

	for (i = 0; format[i] != '\0';)
	{
		if (format[i] != '%')
		{
			n += _putchar(format[i]);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] != ' ')
		{
			switch (format[i + 1])
			{
			case 'c':
				/*print the char from the va_arg*/
				n += _putchar(va_arg(data, int));
				break;
			case 's':
				n += print_string(va_arg(data, char *));
				break;
			case '%':
				/*print the char from the va_arg*/
				n += _putchar('%');
				break;
			case 'd':
				n += print_decimal(va_arg(data, int));
				break;
			case 'i':
				n += print_int(va_arg(data, int));
				break;
			default:
				break;
			}
			i += 2;
		}
	}
	return (n);
}
