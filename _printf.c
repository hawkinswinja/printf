#include<stdarg.h>
#include "main.h"


int _printf(const char *format, ...)
{
	int n, i = 0;
	va_list data;
	va_start(data, format);
	
	for (i = 0; format[i] != '\0')
	    {	
		if (format[i] != '%'){
		    n += _putchar(format[i]);
			i++;
	    }
		else if (format[i] == '%' && format[i + 1] != ' '){
			switch (format[i + 1]){
		/*this is to display the char*/
				case 'c':
					/* print the character from the va_arg */
					n += _putchar(va_arg(data, int));
					break;
		/*this is to display the string*/
				case 's':
					/* print the string from the va_arg */
					count += print_string(va_arg(data, char *))
					break
				default;
			i += 2;
		}
	    }
	
	return (n);
}
