#include "main.h"

/**
 * print_number_base - uses base to print the numbers
 * @count: number of characters
 * @args: arguments variable
 *
 * Return: nothing
*/

int print_number_base(unsigned int num, unsigned int base)
{
	int count = 1;
	static const char *digits = "0123456789abcdef";

	if (num >= base)
	{
		count = (1 + print_number_base(num / base, base));
	}

	_putchar(digits[num % base]);

	return (count);
}


/**
 * print_unsigned - uses the base of 10 to positive integers
 * @count: number of characters
 * @args: arguments variable
 *
 * Return: count
*/

int print_unsigned(va_list args)
{
	int count = 0;

	unsigned int num = va_arg(args, unsigned int);

	count = print_number_base(num, 10);

	return (count);
}

/**
 * print_binary - uses base 2 to print numbers
 * @count: number of characters
 * @args: arguments variable
 *
 * Return: count
*/

int print_binary(va_list args)
{
	int count = 0;

	unsigned int num = va_arg(args, unsigned int);

	count = print_number_base(num, 2);

	return (count);
}

/**
 * print_octal - uses base 8 to print numbers
 * @count: number of characters
 * @args: arguments variable
 *
 * Return: count
*/

int print_octal(va_list args)
{
	int count = 0;

	unsigned int num = va_arg(args, unsigned int);

	count = print_number_base(num, 8);

	return (count);
}

/**
 * print_hex_lower - uses base 16 to print lowercase hex
 * @count: number of characters
 * @args: arguments variable
 *
 * Return: count
*/

int print_hex_lower(va_list args)
{
	int count = 0;

	unsigned int num = va_arg(args, unsigned int);

	count = print_number_base(num, 16);

	return (count);
}
