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

	if (!s)
	{
		s = "(null)";
	}
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
 * function_d - print a decimal with sign
 * @d: integer
 * Return: number of characters printed
 */
int function_d(int d)
{
	int len = 0;
	unsigned int num;

	if (d < 0)
	{
		len += function_c('-');
		num = -d;
	}
	else
	{
		num = d;
	}

	if (num / 10)
	len += function_d(num / 10);

	len += function_c((num % 10) + '0');

	return (len);
}
