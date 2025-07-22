#ifndef MAIN_H
#define MAIN_H

#include <stddef.h> /*pour size_t*/
#include <stdio.h> /*pour stdout du printf*/
#include <stdarg.h> /*pour va_arg*/
#include <stdlib.h> /*pour Malloc et Atoi*/
#include <string.h> /*pour strlen*/
#include <unistd.h> /*pour _putchar*/

/**
*struct function - define functions
*@function_c: function to display a char
*@function_s:functionfunction to display a string
*@function_percent: function to display '%'
*@function_d:function to display a decimal signed
*@function_i:function to display a integer
x
struct function
{

}
*/



int _printf(const char *format, ...);
int _putchar(char c);
int function_c(char c);
int function_s(const char *s);
int function_percent(void);
int function_d(int d);
int function_i(int i);


#endif/*MAIN_H*/
