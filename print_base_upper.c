#include "main.h"
/**
 * print_number_base_upper - for uppercase scenarios
 * @count: number of characters
 * @args: arguments variable
 *
 * Return: nothing
*/

int print_number_base_upper(unsigned int num, unsigned int base)
{
	int count = 1;
	static const char *digits = "0123456789ABCDEF";

	if (num >= base)
	{
		count = (1 + print_number_base_upper(num / base, base));
	}

	_putchar(digits[num % base]);

	return (count);
}

/**
 * print_hex_upper - uses base 16 to print uppercase hex
 * @count: number of characters
 * @args: arguments variable
 *
 * Return: count
*/

int print_hex_upper(va_list args)
{
	int count = 0;

	unsigned int num = va_arg(args, unsigned int);

	count = print_number_base_upper(num, 16);

	return (count);
}

/**
 * print_pointer - print memory address of a pointer variable
 * @args: arguments variable
 *
 * Return: count
*/
int print_pointer(va_list args)
{
	int count = 0;

	void *ptr = va_arg(args, void*);

	count += _putchar('0');
	count += _putchar('x');

	count += print_number_base_upper((unsigned long)ptr, 16);
	return (count);
}
