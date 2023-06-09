#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <stdio.h>


/**
 * struct format - the struct by name stfmt
 * @fmt: index by function
 * @func: pointer to function - funtion print
 */
typedef struct st_fmt
{
	char *fmt;
	int (*func)(va_list list);
} st_fmt;

int _printf(const char *format, ...);
int _putchar(char c);
int func_string(va_list);
int func_char(va_list);
int func_percent(va_list);
int get_match_func(const char *, va_list, st_fmt st_format[]);
int func_digit(va_list);
int func_pointer(va_list list);
int _print_hex(unsigned long int n, char *prefix, int uppercase, int width);
int func_pointer(va_list list);
int _puts(const char *str);
int func_binary_convert(va_list);
int func_octal_convert(va_list);
int func_hex_Upcase_convert(va_list);
int func_hex_Lowcase_convert(va_list);
int binary_oct_hex_convert(unsigned int, int, int);
int func_unsig_int(va_list list);
int func_stringUppercase(va_list list);
int func_revstr(va_list list);
int func_rot13(va_list);

#endif /* MAIN_H */
