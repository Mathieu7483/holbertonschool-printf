#include "main.h"
/**
*type_format - take the format after the %
*@format: format
*@arguments: arguments
*Return: function depending of the char
*/

char *type_format(char format, va_list arguments)
{
	char *result = NULL;

	if (format == 'c')
	{
		char c = (char) va_arg(arguments, int);
			result = function_c(c);
	}
	else if (format == 's')
	{
		char *s = va_arg(arguments, char *);
			result = function_s(s);
	}
	else if (format == '%')
	{
		result = function_percent();
	}
	else if (format == 'd' || format == 'i')
	{
		int d = va_arg(arguments, int);
			result = function_d(d);
	}
	return (result);
}
