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
	int n, check = num % 10, i, j = 1;
	int count = 1;

	num = num / 10;
	n = num;

	if (check < 0)
	{
		_putchar('-');
		n = -n;
		num = -num;
		check = -check;
		count++;
	}
	if (n > 0)
	{
		while (n / 10 != 0)
		{
			j = j * 10;
			n = n / 10;
		}
		n = num;
		while (j > 0)
		{
			i = n / j;
			_putchar(i + '0');
			n = n - (i * j);
			j = j / 10;
			i++;
		}
	}
	_putchar(check + '0');

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
