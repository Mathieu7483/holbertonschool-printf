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
*function_d - print a decimal with sign
*@d: integer
*Return: print sign with decimal
*/
int function_d(int d)
{
	int len = 0;
	unsigned int num;

if (d < 0)
{
	putchar('-');
	len++;
	num = -d;
}
else
{
	num = d;
}
if (num == 0)
{
	putchar('0');
	return (1);
}

if (num / 10)
{
	len += function_d(num / 10);
}

putchar((num % 10) + '0');
len++;

return (len);
}
