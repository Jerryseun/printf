#include "main.h"

/**
 * print_int - uses base 10 to print the numbers
 * @count: number of characters
 * @args: arguments variable
 *
 * Return: nothing
*/

int print_int(va_list args)
{
	int num = va_arg(args, int);
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
 * print_decimal - uses a base of 10 to print numbers
 * 			signed and unsigned.
 * @count: integer counts
 * @args: arguments variable
 *
 * Return: count
 *
*/
int print_decimal(va_list args)
{
	int num = va_arg(args, int);
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
