#include "main.h"

int (*selector(const char *s))(va_list args)
{
	int i = 0;

	arr_printf funcs[] = {
		{"c", print_char}, {"s", print_string},
		{"d", print_decimal}, {"i", print_int},
		{"b", print_binary},
		{"u", print_unsigned}, {"o", print_octal},
		{"x", print_hex_lower}, {"X", print_hex_upper},
		{"S", print_ascii_hex}, {"p", print_pointer},
		{"r", print_strev},{"R", print_rot13}
	};

	for (i = 0; funcs[i].c; i++)
	{
		if (*s == funcs[i].c[0])
			return (funcs[i].f);
	}


	return (NULL);
}
