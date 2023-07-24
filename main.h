#ifndef MAIN_H
#define MAIN_H

#define BUFFER_SIZE 1024

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);

/**
 * struct print_struct - A new struct type with 2 members
 *
 * @c: data type symbols (member 1)
 * @f: pointer function of the various print programs
*/
typedef struct printf_struct
{
	char *c;
	int (*f)(va_list args);
} arr_printf;

int print_char(va_list args);
int print_string(va_list args);
int print_number(int num);
int print_int(va_list args);
int print_decimal(va_list args);
int print_number_base(unsigned int num, unsigned int base);
int print_unsigned(va_list args);
int print_binary(va_list args);
int print_octal(va_list args);
int print_hex_lower(va_list args);
int print_number_base_upper(unsigned int num, unsigned int base);
int print_hex_upper(va_list args);
int print_ascii_hex(va_list args);

#endif
