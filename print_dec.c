#include "main.h"

/**
 * print_number - uses base 10 to print the numbers
 * @count: number of characters
 * @args: arguments variable
 *
 * Return: nothing
*/

int print_number(int num)
{
	int count = 1;

	if (num >= 10)
	{
		count = 1 + (print_number(num / 10));
	}

	_putchar((num % 10) + '0');

	return (count);
}

/**
 * print_int - uses the base of 10 to print int numbers
 * @count: number of characters
 * @args: arguments variable
 *
 * Return: count
*/

int print_int(va_list args)
{
	int num = va_arg(args, int);

	print_number(num);

	return (1);
}

/**
 * print_decimal - uses a base of 10 to print numbers
 * 			signed and unsigned.
 * @count: integer counts
 * @args: arguments variable
 *
 * Return: count
*/

int print_decimal(va_list args)
{
	int count = 0;

	int num = va_arg(args, int);

	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	count = print_number(num);

	return (count);
}
