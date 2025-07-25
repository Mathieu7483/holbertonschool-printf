#include "main.h"
/**
*_printf - The functions in the printf()
*family produce output according to a format as described below
*@format: format of the arguments
*Return: the number of characters printed
*(excludings the null byte used to end output to strings)
*/
int _printf(const char *format, ...)
{
	va_list arguments;
	int display = 0;
		va_start(arguments, format);
	if (format == NULL)
	return (-1);
while (*format)
{
	if (*format == '%' && *(format + 1))
	{
		format++;
		if (*format == 'c')
		{
			char c = (char) va_arg(arguments, int);
				display += function_c(c);
		}
		else if (*format == 's')
		{
			char *s = va_arg(arguments, char *);
				display += function_s(s);
		}
		else if (*format == '%')
		{
			display += function_percent();
		}
		else if (*format == 'd' || *format == 'i')
		{
			int d = va_arg(arguments, int);
				display += function_d(d);
		}
		else
		{
			display += function_c('%');
			display += function_c(*format);
		}
	}
	else
	{
		display += function_c(*format);
	}
	format++;
}
va_end(arguments);
return (display);
}
