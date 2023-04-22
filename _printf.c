#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * _printf - Do formatted printing
 *
 * @format: A string containing all the desired characters
 *
 * Return: A total count of the characters printed
 */
int _printf(const char *format, ...)
{
	int result;
	va_list arg;

	conver_t f_array[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_percent},
		{"d", print_i},
		{"i", print_i}
	};

	if (format == NULL)
		return (-1);

	va_start(arg, format);
	result = parser(format, f_array, arg);
	va_end(arg);
	return (result);
}
