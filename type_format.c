#include "main.h"
/**
*type_format - take the format after the %
*@format: format
*@arguments: arguments
*Return: function depending of the char
*/

char type_format(char format, va_list arguments)
{
int count = 0;

if (format == 'c')
{
	char c = va_arg(arguments, int);
		count = function_c(c);
}
else if (format == 's')
{
	char *s = va_arg(arguments, char *);
		count = function_s(s);
}
else if (format == '%')
{
	count = function_percent();
}
else if (format == 'd' || format == 'i')
{
	int d = va_arg(arguments, int);
		count = function_d(d);
}

return (count);
}

