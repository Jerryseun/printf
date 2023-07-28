#include "main.h"

/**
 * print_flag - gets flag modifier +, space, #
 * @c: holds the flag specifier
 * @f: pointer to the struct flags
 *
 * Return: 1 if a flag, else 0
 */
int print_flag(char c, flag_t *f)
{
	int l = 0;

	switch (c)
	{
		case '+':
			f->plus = 1;
			l = 1;
			break;
		case ' ':
			f->space = 1;
			l = 1;
			break;
		case '#':
			f->hash = 1;
			l = 1;
			break;
	}

	return (l);
}
