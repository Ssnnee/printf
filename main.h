#ifndef MAIN_H_
#define MAIN_H_
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/**
 * struct convert - Struct operators
 *
 * @c: The character to be written.
 * @f: The function associated
 */
struct convert
{
	char *c;
	int (*f)(va_list);
};
typedef struct convert conver_t;

int _putchar(char c);
int print_c(va_list arg);
int print_s(va_list arg);
int print_i(va_list arg);
int print_n(va_list args);
int print_percent(__attribute__((unused))va_list arg);
int parser(const char *format, conver_t f_array[], va_list arg);
int _printf(const char *format, ...);

#endif
