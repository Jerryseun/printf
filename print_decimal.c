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
