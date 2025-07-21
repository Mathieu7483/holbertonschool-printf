#include "main.h"
/**
 * function_c - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int function_c(char c) /*function to print char c*/
{
	return (write(1, &c, 1));
}

/**
*function_s - print a string
*@s: string to print
*Return: string
*/
int function_s(const char *s)/*function to print string s*/
{
	int string = 0;
	for (; s && *s; s++, string++)
	{
		write(1, s, 1);
	}
	return (string);
}

/**
*function_percent - print '%'
*Return: character %
*/
int function_percent(void)/*function to print char %*/
{
	return (write(1, "%", 1));
}

/**
*_printf - The functions in the printf()
*family produce output according to a format as described below
*@format: format of the arguments
*Return: the number of characters printed
*(excluding the null byte used to end output to strings)
*/
int _printf(const char *format, ...)
{
	

	if (*format == NULL)
	return;
	if (*format == 'c')
	return (function_c);
	if (*format == 's')
	return (function_s);
	if (*format == 'p')
	return (function_percent);
}
