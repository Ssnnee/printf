#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * parser - print a formated string.
 *
 * @format: A string containing all the desired characters.
 * @f_array: A list of all the posible functions.
 * @arg: A list containing all the argumentents passed to the program.
 *
 * Return: A total count of the characters printed.
 */
int parser(const char *format, conver_t f_array[], va_list arg)
{
	int i, j, r_val, result;

	result = 0, i = 0;
	while (format[i] != '\0') /* Iterate through the main string */
	{
		if (format[i] == '%') /* Check for format specifiers */
		{
			j = 0;
			while (f_array[j].c != NULL) /* find the right function */
			{
				if (format[i + 1] == f_array[j].c[0])
				{
					r_val = f_array[j].f(arg);
					if (r_val == -1)
						return (-1);
					result += r_val;
					break;
				} j++;
			}
			if (f_array[j].c == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					result = result + 2;
				}
				else
					return (-1);
			} i = i + 1; /* Updating i to skip format symbols */
		}
		else
		{
			_putchar(format[i]);
			result++;
		} i++;
	} return (result);
}
